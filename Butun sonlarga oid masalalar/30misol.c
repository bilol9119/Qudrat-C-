#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){

    system("cls");
    int N;
    printf("Yilni kiriting: ");
    scanf("%d", &N);

    if(N == 0){
        printf("0 asr");
    }
    else {
        int asr = N % 100;
        if (asr > 0){
            printf("%d asr", N / 100 + 1);
        }else printf("%d asr", N / 100 - 1);
    }
    
    return 0;
}
