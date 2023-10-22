#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){

    system("cls");
    int n;
    printf("2 xonali son kiriting: ");
    scanf("%d", &n);
        
    int A = (n%10) * 10 + n/10;
        printf("Bu sonning raqamlari almashganda = %d ga teng", A);
    
    return 0;
}