#include <stdio.h>
#include <stdlib.h>

/* Escreva um programa que verifique se um n�mero � pal�ndromo.
Um n�mero � pal�ndromo se continua o mesmo caso seus d�gitos sejam invertidos.
Exemplos: 454 ou 10501 */

int main()
{
    int n, numero, invertido = 0, i;

    printf("Digite algum numero:\n");
    scanf("%d", &numero);

    n = numero;

    while(numero != 0){
        i = numero % 10;
        invertido = 10*invertido + i;
        numero /= 10;
    }
    printf("%d", invertido);
    if (n == invertido){
        printf("\n%d eh um numero polindromo", n);
    }
    else {
        printf("\n%d nao eh um numero polindromo", n);
    }

}
