#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){

    system("cls");
    int n;
    printf("3 xonali son kiriting: ");
    scanf("%d", &n);
     
        printf("Bu sonning birliklar xonasi = %d ga teng\n", n%10);
        printf("Bu sonning onliklar xonasi = %d ga teng\n", (n/10)%10);
    
    return 0;
}