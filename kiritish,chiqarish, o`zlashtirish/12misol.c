#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){

    system("cls");
    int a, b;
    printf(" To`g`ri uchburchakning katetlari a va b sonlarni kiriting: ");
    scanf("%d%d", &a, &b);
        
        float c = (a * a) + (b * b);
        printf("Gipotenuza teng: %g\n", sqrt(c));
        
        float P = a + b + sqrt(c);
        printf("Perimetri teng %g", P);
        
    return 0;
}