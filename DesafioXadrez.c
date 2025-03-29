#include <stdio.h>
 
int main() {
 
    int i, j;

    printf("Movimento da torre no xadrez\n");
    for(i = 0; i < 5; i++){
        printf("Direita\n");
    }

    i = 1;

    printf("Movimento do bispo no xadrez\n");
    while(i <= 5){
        printf("cima,direita\n");
        i++;
    }
    
    i = 1;

    printf("Movimento da rainha no xadrez\n");
    do{
        printf("Esquerda\n");
        i++;
    } while (i <= 8);


    printf("Movimento do cavalo no xadrez\n");
    for (int i = 0; i < 2; i++) {
        printf("Baixo\n");
        
        int j = 0;
        while (j < 1) {
            if (i == 1) {  
                printf("Esquerda\n");
            }
            j++;
        }
    }

    return 0;
}