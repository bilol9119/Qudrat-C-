#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){

    system("cls");
    int d;
    printf("Aylananing diametrini kiriting: ");
    scanf("%d", &d);
    const double p = 3.14;
        float L = p * d;
        printf("Aylananing uzunligi: %g", L);
    
    return 0;
}