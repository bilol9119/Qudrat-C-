#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){

    system("cls");
    int N;
    printf("3 xonali son kiriting: ");
    scanf("%d", &N);

    int a = (N % 100) * 10;
    int b = N /100;
    printf("Bu son %d", a + b);
    
    
    return 0;
}