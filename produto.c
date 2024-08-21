#include <stdio.h>
#include <stdlib.h>


int main()
{

    char produtos [20] [10];
    int valores [10];
    int maior, menor,quantidade,soma;
    int i;
    maior = 0;
    menor = 10000;
    quantidade = 0;
    soma = 0;
    for(i = 0; i <3 ; i++)
    {

        printf("Digite o nome do produto\n");
        fgets(produtos[i], 20, stdin);
        printf("Digite o valor\n");
        scanf("%d", &valores[i]);
        getchar();




        if(valores[i] > 150)
        {
            quantidade ++;
        }

        if (valores[i] < menor)
        {
            menor = valores[i];
        }

        if (valores[i] > maior)
        {
            maior = valores[i];

        }


        soma += valores[i];
    }


    printf("Produto com maior valor: %d\n", maior);
    printf("Produto com menor valor %d\n", menor);
    printf("Quantidade de produtos com valores > 150: %d\n", quantidade);
    printf("Soma de todos:%d", soma);



    return 0;

}
