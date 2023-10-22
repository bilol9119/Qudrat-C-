#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){

    system("cls");
    float a, b;
    printf(" a va b sonlarni kiriting: ");
    scanf("%f%f", &a, &b);

        int G = (a * b);
        printf("O`rta geometrigi : %g\n", sqrt(G));
    
    return 0;
}