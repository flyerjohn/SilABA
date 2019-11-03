#include <stdio.h>
#include <string.h>

void escolherModo(int check){
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
    int check;
    printf("Escolha o modo de jogo, 1 ou 2: ");
    scanf("%d", &check);
    escolherModo(check);
    return 0;
}