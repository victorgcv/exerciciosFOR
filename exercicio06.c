#include <stdio.h>
#include <locale.h>
int main()
{
    //Faça um algoritmo para Imprimir os quadrados dos números de 1 a 10
    setlocale(LC_ALL, "Portuguese");
    
    int numero;
    
    for (numero = 1 ; numero <= 10 ; numero++)
    {
       printf("o quadrado de %d é %d\n", numero, numero * numero);
    }
    
    
    
    return 0;
}
