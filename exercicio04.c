#include <stdio.h>
#include <locale.h>


// 03. Faça um algoritmo para Calcular a soma dos 10 primeiros números naturais
int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int soma;
    int numero;
    
    soma = 0;
    
    
    for (numero = 0 ; numero <= 10; numero++ )
    {
        soma += numero;
    }   
    
    printf("A soma dos 10 primeiros números naturais é: %d", soma);
    
    
    return 0;
}
