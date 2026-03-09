#include <stdio.h>
#include <conio.h>

int esPrimo(int n)
{
    int j;

    if (n < 2)
    {
        return 0;
    }

    for (j = 2; j * j <= n; j++)
    {
        if (n % j == 0)
        {
            return 0;
        }
    }

    return 1;
}

void Primos(int a, int b)
{
    int i;
    for(i = a; i <= b; i++)
    {
        if (esPrimo(i) == 1)
        {
            printf("%d\n", i);
        }
    }
}

int main()
{
    int numA, numB, aux;

    // Solicitar los dos numeros
    printf("Ingrese el numero menor: ");
    scanf("%d", &numA);

    printf("Ingrese el numero mayor: ");
    scanf("%d", &numB);

    if (numA > numB)
    {
        aux = numA;
        numA = numB;
        numB = aux;
    }

    // Mostrar el resultado
    Primos(numA, numB);

    getch();
    return 0;
}