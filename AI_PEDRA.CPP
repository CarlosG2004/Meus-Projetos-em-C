#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int placar_jog=0;
int placar_comp=0;
int jogo_jogador=0;
int jogo_computador=0;

int main(void){
    for(int i=0;i<3;i++){
        system("cls");
        printf("**Bem vindo ao pedra-papel-tesoura**\n");
        printf("Voce jogara contra o computador.......\n\n");
        printf("***Placar Atual***\n");
        printf("Jogador: %d - Computador: %d\n", placar_jog, placar_comp);
        printf("***********\n\n");
        printf("Escolha sua jogada:\n");
        printf("1 - Pedra\n");
        printf("2 - Papel\n");
        printf("3 - Tesoura\n");
        printf("Sua jogada: ");
        scanf("%d", &jogo_jogador);
        srand(time(NULL));
        jogo_computador = 1 + rand() % 3;

        printf("Meu jogo: %d - Computador: %d\n", jogo_jogador, jogo_computador);
        if(jogo_jogador == jogo_computador){
            printf("Voce empatou com o computador!\n");
        }
        if((jogo_jogador == 1) && (jogo_computador == 3)){
            printf("Voce ganhou! Parabens!\n");
            placar_jog++;
        }
        if((jogo_jogador == 2) && (jogo_computador == 1)){
            printf("Voce ganhou! Parabens!\n");
            placar_jog++;
        }
        if((jogo_jogador == 3) && (jogo_computador == 2)){
            printf("Voce ganhou! Parabens!\n");
            placar_jog++;
        }
        if((jogo_jogador == 1) && (jogo_computador == 2)){
            printf("Ops, voce perdeu!\n");
            placar_comp++;
        }
        if((jogo_jogador == 2) && (jogo_computador == 3)){
            printf("Ops, voce perdeu!\n");
            placar_comp++;
        }
        if((jogo_jogador == 3) && (jogo_computador == 1)){
            printf("Ops, voce perdeu!\n");
            placar_comp++;
        }
        printf("Pressione qualquer tecla para continuar...\n");
        getch();
    }

    system("cls");
    printf("*** Placar Final ***\n");
    printf(" Jogador: %d - Computador: %d\n", placar_jog, placar_comp);
    if(placar_jog == placar_comp){
        printf("Voces empataram!!!\n");
    }else if(placar_jog > placar_comp){
        printf("Voce ganhou!!!\n");
    }else if(placar_jog < placar_comp){
        printf("Ops, o computador ganhou!!!\n");
    }
    printf("Pressione qualquer tecla para finalizar...");
    getch();
}