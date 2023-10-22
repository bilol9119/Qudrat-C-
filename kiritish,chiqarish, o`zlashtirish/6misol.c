#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){

    system("cls");
    int a, b,c;
    printf("Parololipipeding  a, b va c  tomonini kiriting: ");
    scanf("%d%d%d", &a, &b, &c);

        int V = a * b * c ;
        int S = 2 * (a*b + a*c + b*c);
        printf("Hajmi : %d\n", V);
        printf("To`la sirti:  %d", S);
    
    return 0;
}