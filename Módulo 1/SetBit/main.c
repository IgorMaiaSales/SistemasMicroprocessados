#include <stdio.h>

unsigned char SetBit(unsigned char x, int bit);

void main(void) {

    unsigned char x, y;
    int bit;

    printf("Digite um valor de entrada entre 00 e FF:\n");
    scanf("%x", &x);

    do {
        printf("Digite o bit que deseja setar:\n");
        scanf("%d", &bit);

        if( bit > 7 || bit < 0 )
            printf("Digite um numero entre 0 e 7!\n");
        
    } while( bit > 7 || bit < 0 );

    y = SetBit(x, bit);

    printf("O valor de entrada: %x\n", x);
    printf("O bit a ser setado: bit%d\n", bit);
    printf("O resultado: %x", y);

}

/* bit vai de 0 ateh 7 */
unsigned char SetBit(unsigned char x, int bit) {

    unsigned char mask;

    mask = (0x01<<bit);

    x = x | mask;

    return x;

}