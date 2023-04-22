#include <stdio.h>
#include <stdlib.h>

int main (void){
    int  valores[6] ;

    for(int x = 0; x < 6;x++){
        printf("Informe o %i º valor : \n",x+1);
        scanf("%i",&valores[x]);
    }
    for(int x = 0; x < 6;x++){
        printf("Vetor [%i]= %i \n",x,valores[x]);
    }
    getch();
    return 0;

}
