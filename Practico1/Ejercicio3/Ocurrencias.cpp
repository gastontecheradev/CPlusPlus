#include <stdio.h>
#include <conio.h>

// Crear la funcion Ocurrencias con los parametros frase, largo y caracter
int Ocurrencias(char frase[], int largo, char caracter)
{
    int suma = 0;

    // Contar cuantas veces aparece la letra en la frase
    for(int i = 0; i < largo; i++)
    {
        if (frase[i] == caracter)
        {
            suma += 1;
        }
    }

    return suma;
}

int main()
{
    char frase[100];
    char letra;
    int i;
    int largo = 0;

    //  Solicitar la frase y la letra al usuario
    printf("CANTIDAD DE OCURRENCIAS\n\n");

    printf("Ingrese la letra: ");
    scanf(" %c", &letra);

    printf("Ingrese la frase: ");

    scanf("%c", &frase[0]);
    
    // Crear un array de caracteres con la frase ingresada
    // Crear la variable largo
    // Crear la variable letra
    for (i = 0; i < 99; i++)
    {
        frase[i] = getchar();
     
        if (frase[i] == '\n')
        {
            break;
        }

        largo++;
    }

    frase[i] = '\0';

    printf("Frase %s\n", frase);

    printf("Largo: %d\n", largo);

    int cantOcurrencias = Ocurrencias(frase, largo, letra);

    printf("Cantidad de ocurrencias: %d", cantOcurrencias);

    getch();
    return 0;
}
