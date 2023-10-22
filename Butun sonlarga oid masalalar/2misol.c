#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){

    int K;
    printf("Vaznni kilogramda kiriting: ");
    scanf("%d", &K);
    system("cls");
        
        printf("%d kilogram  = %d to`liq tonnaga teng: ", K, K/1000 );
    
    return 0;
}