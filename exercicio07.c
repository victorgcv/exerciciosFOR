#include <stdio.h>
#include <locale.h>
int main()
{
    
    setlocale(LC_ALL, "Portuguese");
    
    int numero;
    int multiplos;
    
    for (numero = 3 ; numero <= 27; )
    {
       numero = numero + 3;
       printf("%d\n", numero);
    }
    
    
    
    return 0;
}
