#include <stdio.h>
#include <locale.h>


//01. 02. Faça um algoritmo para Imprimir os números pares de 1 a 20
int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int numero;
    
    
    
    for (numero = 0 ; numero <= 20; numero++)
    {
        if (numero%2==0)
            printf("%d", numero);
    }
    
    
    return 0;
}
