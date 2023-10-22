#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){

    system("cls");
    int n;
    printf("2 xonali son kiriting: ");
    scanf("%d", &n);
        
        int Y = n/10 + n%10;
        printf("Kiritilgan sonning raqamlari yig`indisi %d ga teng: ", Y);
    
    return 0;
}