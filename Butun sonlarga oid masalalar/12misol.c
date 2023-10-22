#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){

    system("cls");
    int n;
    printf("3 xonali son kiriting: ");
    scanf("%d", &n);
     
    int yuz = (n % 10) * 100;
    int ten = ((n/10) % 10) * 10;
    int bir = n / 100;
    printf("Bu sonning teslarisi  %d", yuz + ten + bir);
    return 0;
}