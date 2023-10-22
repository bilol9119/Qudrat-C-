#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){

    int B;
    printf("Baytni kiriting: ");
    scanf("%d", &B);
    system("cls");
        
        printf("%d bayt  = %d to`liq kbayt teng: ", B, B/1024 );
    
    return 0;
}