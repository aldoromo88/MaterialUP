#include<stdio.h>

int main()
{
    int totalAriticulos;

    /*Capturando la cantidad total articulos*/
    printf("Cantidad total de articulos ");
    scanf("%d",&totalAriticulos);

    double precios[totalAriticulos];
    int cantidades[totalAriticulos];
    double total = 0;
    int i;

    /* Capturando los valores de los arreglos */
    for (i=0; i <totalAriticulos; i++)
    {
        printf("Precio del articulo [%d]:", i);
        scanf("%lf",&precios[i]);

        printf("Cantidad del articulo [%d]:", i);
        scanf("%d",&cantidades[i]);
    }

    /* Calculando el total */
    for (i=0; i <totalAriticulos; i++) {
        total  = total + (precios[i]*cantidades[i]);
    }

    /* Desplegando el total */
    printf("El total es de %lf \n", total);
    return 0;
}
