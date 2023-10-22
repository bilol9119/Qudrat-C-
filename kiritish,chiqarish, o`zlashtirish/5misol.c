#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){

    system("cls");
    int a;
    printf("Kubning yon tomoni a ni kiriting: ");
    scanf("%d", &a);

        int V = a * a * a;
        int S = 6 * (a * a);
        printf("Hajmi : %d\n", V);
        printf("To`la sirti %d", S);
    
    return 0;
}