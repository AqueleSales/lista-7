#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int a = rand() % 100, b = rand() % 100;
    printf("endereco 1:%p \n", &a);
    printf("endereco 2:%p \n", &b);
    if(&a > &b){
        printf("o maior e o endereco 1:%p \n", &a);
    }else{
        printf("o maior e o endereco 2:%p", &b);
    }
return 0;
}
