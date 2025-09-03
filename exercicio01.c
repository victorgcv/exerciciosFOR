#include <stdio.h>
#include <locale.h>


//01. Faça um algoritmo para Imprimir números de 1 a 10

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int numero;
    
    for (numero = 1 ; numero <= 10; numero++)
    {
        printf("%d", numero);
    }
    
    
    return 0;
}
