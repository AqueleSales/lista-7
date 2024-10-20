#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int array[3][3];
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("endereco do [%d][%d]: %p\n", i, j, &array[i][j]);
        }
    }
    return 0;
}
