#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){

    system("cls");
    int N;
    printf("3 xonali son kiriting: ");
    scanf("%d", &N);

    int a = N / 10;
    int b = (N % 10) * 100;
    printf("Bu son %d", b + a);
    
    
    return 0;
}





