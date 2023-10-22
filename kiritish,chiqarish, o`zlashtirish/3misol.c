#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){

    system("cls");
    int a, b;
    printf("To`g`ri tortburchakning  a va b  tomonini kiriting: ");
    scanf("%d%d", &a, &b);

        int S = a * b;
        int P = 2 * (a + b);
        printf("Yuzasi : %d\n", S);
        printf("Perimetri %d", P);
    
    return 0;
}