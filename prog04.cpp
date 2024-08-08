#include <stdio.h>
#include <conio.h>

int n, calcula;

int main()
{
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    calcula = n % 2;
    if(calcula == 0)
    {
        printf("\nO numero digitado é PAR!");
    }else{
        printf("\nEste numero e IMPAR!");
}
    printf("Pressione qualquer tecla para finalizar...");
    getch();
}