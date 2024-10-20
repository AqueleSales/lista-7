#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

int main(){
    float array[10];
    int i;
    for(i=0;i<10;i++){
        printf("endereco da %d:%p \n",i, &array[i]);
    }
    return 0;
}
