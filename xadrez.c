#include <stdio.h>

void movimento_peca (int p, int m, char d []){ 
    for (p = 3, m = 8; p < m; (p)++){
        printf("%s\n", d);
    }
}

void movimento_rainha (int a, int b, char c []){
    for(a = 0, b = 8; a < b; (a)++){
        printf("%s\n", c);
    }
}

int main () {

    printf("Movimento da torre:\n");
    int peca = 0;
    int torre = 5;

    movimento_peca (peca, torre, "Direita");
    printf("\n");


    printf("Movimento do bispo:\n");

    for (int vertical = 0; vertical < 5; vertical++) {         
        printf("Cima\t");
        for (int horizontal = 0; horizontal < 1; horizontal++) {
            printf("Direita\n");
        }
    }

    printf("\n");

    int rainha = 8;

    printf("Movimento da rainha:\n");
    movimento_rainha (peca, rainha , "Esquerda");
    

    printf("\n");

    printf("Movimento do cavalo:\n");

    for (int cima = 0; cima <= 2; cima++) {
        if (cima < 2) { // 
            printf("Cima\n");
        }
        for (int esquerda = 0; cima == 2 && esquerda < 1; esquerda++) {
            printf("Direita\n");
        }
    }

}