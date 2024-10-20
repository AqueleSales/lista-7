#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
void trocar(int *z, int *x) {
    int aux;
    aux = *z;
    *z = *x;
    *x = aux;
}

int main(){
    int a,b;
    srand(time(NULL));
    a = rand() % 100;
    printf("valor de a: %d\n", a);
    b = rand() % 100;
    printf("valor de b: %d\n", b);
    printf("antes->\n valor de a: %d\n valor de b: %d\n", a,b);

    trocar(&a,&b);
    printf("depois->\n valor de a: %d\n valor de b: %d", a,b);
    return 0;
}
