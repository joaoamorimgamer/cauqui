#include <stdio.h>

int main()
{
    float primeiroNumDiv;
    float segundoNumDiv;
    int primeiroNum;
    int segundoNum;
    int metodo;

    printf("Bem vindo ao cauqui! Essa é a melhor calculadora feita, porque ela é muito leve. Ela não tem suporte para operações que você nunca vai usar.\n");
    printf("\nprimeiro número? ");
    scanf("%d", &primeiroNum);
    printf("\nsegundo número? ");
    scanf("%d", &segundoNum);
    printf("Selecione um número\n (1: Adição; 2: Subtração; 3: Multiplicação; 4: Divisão)\n");

    scanf("%d", &metodo);
    if(metodo == 1)
    {
        printf("o resultado é %d.\n", primeiroNum + segundoNum);
    }
    else if(metodo == 2){
        printf("o resultado é %d.\n", primeiroNum - segundoNum);
    }
    else if(metodo == 3){
        printf("o resultado é %d.\n", primeiroNum * segundoNum);
    }
    else if(metodo == 4){
        printf("o resultado é %.5f e o restante é %d.\n", primeiroNumDiv / segundoNumDiv, primeiroNum % segundoNum);
    }

    return 0;
}
