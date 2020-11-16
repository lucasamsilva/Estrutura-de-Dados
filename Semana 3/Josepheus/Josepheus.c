#include "listaLigadaCabCirc.c"
#include <stdio.h>

int main()
{

    LISTA soldados;
    unsigned long int qntdSoldados;
    inicializarLista(&soldados);

    printf("Digite a quantidade de soldados na roda: ");
    scanf("%li", &qntdSoldados);

    while (qntdSoldados != 0)
    {
        for (int i = 0; i < qntdSoldados; i++)
        {
            REGISTRO reg;
            reg.chave = i + 1;
            inserirElemListaOrd(&soldados, reg);
        }
        
        Josepheus(&soldados);

        reinicializarLista(&soldados);
        
        printf("Digite a quantidade de soldados na roda: ");
        scanf("%li", &qntdSoldados);
    }

    return 0;
}