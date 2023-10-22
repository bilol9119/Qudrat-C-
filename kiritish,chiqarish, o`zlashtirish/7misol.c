#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){

    system("cls");
    int R;
    printf("Doiraning R radiusini kiriting: ");
    scanf("%d", &R);
    float const p = 3.14;

        float L = 2 * p * R;
        float S = p * (R*R);
        printf("Uzunligi : %g\n", L);
        printf("Yuzasi:  %g", S);
    
    return 0;
}