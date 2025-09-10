#include <stdio.h>
#include <locale.h>


//Faça um algoritmo para Contar quantos números ímpares há entre 1 e 50
int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int numero;
    
    
    
    for (numero = 0 ; numero <= 50; numero++)
    {
        if (numero%2!=0)
            printf("%d\n", numero);
    }
    
    
    return 0;
}
