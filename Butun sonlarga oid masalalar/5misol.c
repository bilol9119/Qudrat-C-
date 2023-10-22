#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){

    system("cls");
    int A , B;
    printf("A va B kesmani kiriting (A > B): ");
    scanf("%d%d", &A, &B);
        
        printf("A kesmada B kesma %d marta to`liq joylasha oladi\n", A/B);
        printf("A kesmada B kesmaning %d qismi joylasha olmaydi", A%B);
    
    return 0;
}