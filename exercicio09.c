#include <stdio.h>
#include <locale.h>


//Faça um algoritmo para Imprimir a sequência de Fibonacci até o décimo termo
int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int a = 0;
    int b = 1;
    int c;
    int i;
    
    printf("%d\n" , a);
    printf("%d\n", b);
    
    for (i = 3; i <= 10; i++) {
        c = a + b;
        printf("%d\n", c);
        a = b;
        b = c;
    }
    
    
    
    return 0;
}
