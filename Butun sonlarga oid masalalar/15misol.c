#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){

    system("cls");
    int N;
    printf("3 xonali son kiriting: ");
    scanf("%d", &N);

    int ten = (N / 100) * 10;
    int yuz = ((N / 10) % 10) * 100;
    int bir = N % 10;
    
    printf("Bu son %d", yuz + ten + bir);
    
    
    return 0;
}





