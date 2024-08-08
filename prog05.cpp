#include <stdio.h>
#include <math.h>
#include <conio.h>

int x, y, z;

int main()
{

    do
    {

    printf("Digite o tamanho (numero inteiro) do lado x do triangulo: ");
    scanf("%d", &x);
    printf("\nDigite o tamanho (numero inteiro) do lado y do triangulo: ");
    scanf("%d", &y);
    printf("\ndigite o tamanho (numero inteiro) do lado z do triangulo: ");
    scanf("%d", &z);
    while (!((fabs(y - z)  < x && x < (y + z)) && (fabs(x - z)  < y) && y < (fabs(x + z)) && y < (x - y) < z) && (z < (x + y))));
    
    }
}