#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int inteiro;
    float real;
    char charr;
    int *ptr_inteiro;
    float *ptr_real;
    char *ptr_charr;

    ptr_inteiro = &inteiro;
    ptr_real = &real;
    ptr_charr = &charr;

    printf("um numero: ");
    scanf("%d", &inteiro);
    printf("um real: ");
    scanf("%f", &real);
    printf("uma letra: ");
    scanf("%s", &charr);
    printf("-----------------------\n");
    printf("numero: %d; real: %.2f; letra: %c \n", inteiro,real,charr);

    *ptr_inteiro = rand() % 100;
    *ptr_real = rand() % 1001/100;
    *ptr_charr = 'z';

    printf("-----------------------\n");
    printf("Valores modificados:\n");
    printf("numero: %d; real: %.2f; letra: %c\n", inteiro, real, charr);


return 0;
}
