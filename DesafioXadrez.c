#include <stdio.h>
 
int main() {
 
    int i;

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


    return 0;
}