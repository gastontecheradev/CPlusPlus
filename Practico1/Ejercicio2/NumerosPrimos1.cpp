#include <stdio.h>
#include <conio.h>

void Primos(int a, int b)
{
    // Crear un array con ese rango
    int N = b - a + 1;
    int miArray[N];

    for (int i=0; i<N; i++)
    {
        miArray[i] = a + i;
    }
    

    // Recorrer los numeros
    for(int i=0; i<N; i++)
    {
        // Los numeros menores que 2 no son primos, se pasa a la siguiente iteracion
        if (miArray[i] < 2)
        {
            continue;
        }

        // Dividir entre numeros desde 2 hasta la raiz del numero
        int contJ = 0;

        for(int j=2; j*j <= miArray[i] &&  contJ == 0; j++)
        {
            if(miArray[i] % j == 0)
            {
                contJ += 1;
            }
        }

        if (contJ == 0)
        {
            printf("%d\n", miArray[i]);
        }
    }
}

int main()
{
    int numA;
    int numB;

    // Solicitar los dos numeros
    printf("Ingrese el numero menor: ");
    scanf("%d", &numA);

    printf("Ingrese el numero mayor: ");
    scanf("%d", &numB);

    // Mostrar el resultado
    Primos(numA, numB);

    getch();
    return 0;
}