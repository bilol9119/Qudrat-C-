#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){

    system("cls");
    int n;
    printf("2 xonali son kiriting: ");
    scanf("%d", &n);
        
        printf("Bu sonning o`nliklar xonasi = %d ga teng\n", n/10);
        printf("Bu sonning birliklar xonasi = %d ga teng", n%10);
    
    return 0;
}