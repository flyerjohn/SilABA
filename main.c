#include <stdio.h>
#include <string.h>

int comparaCartas(char carta1[6], char carta2[6]){ // funcao que se encontrar divergencias nas palavras, retorna 0
    for(int i = 0; i < 6; i++){
        if(carta1[i] != carta2[i]){
            printf("%c x %c \n", carta1[i], carta2[i]);
            return 0;
        }
    }
    return 1;
}

void escolherModo(int check){ // funcao para escolher o modo de jogo
    char comp[6] = "bola", pal[6];
    int numC = 4, numP = 0, boolCmp;
    switch (check)
    {
    case 1:
        printf("Complete: bo__ \n");
        scanf("%s", &pal);
        boolCmp = strcmp(comp, pal);
        if(boolCmp == 0){
            printf("boa\n");
            break;
        } else{
            printf("errado. %d\n", boolCmp);
        }
        break;

    case 2:
        printf("Digite o resultado da soma 2+2: ");
        scanf("%d", &numP);
        if(numC == numP){
            printf("boa.");
        } else{
            printf("numeros diferentes.");
        }
        break;
    default:
        printf("Modo invalido");
        break;
    }
}

int main()
{
    char * c1 = "Bola";
    char * c2 = "Bol"; 
    int check, m1;
    printf("Escolha o modo de jogo, 1 ou 2: ");
    scanf("%d", &check);
    escolherModo(check);
    m1 = comparaCartas(c1, c2);
    printf("%d", m1); // checagem do retorno da funcao comparaCartas
    return 0;
}