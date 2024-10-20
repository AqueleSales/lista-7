#include <stdio.h>
void restoR(float a, int *inteiro, float *parte) {
    *inteiro = (int)a;
    *parte = a - *inteiro;
}

int main() {
    float a, parte;
    int inteiro;
    printf("digite um real: ");
    scanf("%f", &a);
    restoR(a, &inteiro, &parte);

    printf("inteiro: %d\n", inteiro);
    printf("resto: %.2f\n", parte);

    return 0;
}
