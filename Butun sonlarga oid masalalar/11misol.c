#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){

    system("cls");
    int n;
    printf("3 xonali son kiriting: ");
    scanf("%d", &n);
     
    int Y = n / 100 + n % 10 + ((n/10) % 10);
    printf("Bu sonning raqamlari yig`indisi %d", Y);
    return 0;
}