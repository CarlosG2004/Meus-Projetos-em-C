#include <stdio.h>
#include <conio.h>

float peso, altura, imc;

int main(){
printf("Digite seu peso em kg: ");
scanf("%f", &peso);
printf("\nAgora digite a sua altura em metros: ");
scanf("%f", &altura);
imc = peso/(altura*altura);
printf("O seu IMC é: %f, imc");
}