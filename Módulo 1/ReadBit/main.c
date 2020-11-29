#include <stdio.h>

int ReadBit(unsigned char x, int bit);

void main(void) {

    unsigned char x;
    int bit, y;

    printf("Digite um valor de entrada entre 00 e FF:\n");
    scanf("%x", &x);

    do {
        printf("Digite o bit que deseja ler:\n");
        scanf("%d", &bit);

        if( bit > 7 || bit < 0 )
            printf("Digite um numero entre 0 e 7!\n");
        
    } while( bit > 7 || bit < 0 );

    y = ReadBit(x, bit);

    printf("O valor de entrada eh: %x\n", x);
    printf("O bit a ser lido eh: bit%d\n", bit);
    printf("o valor do bit%d eh: %d", bit, y);

}

/* bit vai de 0 ateh 7 */
int ReadBit(unsigned char x, int bit) {

    unsigned char mask;

    mask = (0x01<<bit);

    x = x & mask;

    if ( x > 0 )
        return 1;
    else
        return 0;

}