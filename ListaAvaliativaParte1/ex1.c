#include <stdio.h>
#include <stdlib.h>

int main (void){
    int A [6] = {1,0,5,-2,-5,7};
    int sum;
    for(int x = 0; x < 6;x++){
        printf("Vetor [%i]= %i \n",x,A[x]);
    }
    sum = A[0]+ A[1] + A[5];
    printf("\n Soma entre A[0]+A[1] + A[5] = %i \n",sum);
    printf("\n");
    A[4] = 100;

for(int x = 0; x < 6;x++){
        printf("Vetor [%i]= %i \n",x,A[x]);
    }

    getch();
    return 0;

}
