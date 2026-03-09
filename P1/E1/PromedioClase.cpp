#include <stdio.h>
#include <conio.h>

const int N = 5;

// Promedio de las 4 calificaciones mayores entre 5
float PromClase(int calArr[])
{
    int menor = calArr[0];
    int suma = 0;

    // Buscar la menor calificacion y sumar las calificaciones
    for(int i=0; i<N; i++)
    {
        if(calArr[i] < menor)
        {
            menor = calArr[i];
        }

        suma += calArr[i];
    }

    suma -= menor;

    return (float)suma / (N-1);

}

int main()
{
    float resPromedio;
    int notasArr[N];

    // Solicitar calificaciones
    for(int i=0; i<N; i++)
    {
        printf("Ingrese la calificacion numero %d: ", i+1);
        scanf("%d", &notasArr[i]);
    }

    resPromedio = PromClase(notasArr);

    printf("El promedio es: %.2f\n", resPromedio);

    getch();
    return 0;
}