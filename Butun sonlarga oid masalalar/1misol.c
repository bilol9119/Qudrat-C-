#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){

    int L;
    printf("Uzunlikni santimetrda kiriting: ");
    scanf("%d", &L);
    system("cls");
        
        printf("%d santimetr  = %d to`liq metrga teng: ", L, L/100 );
    
    return 0;
}