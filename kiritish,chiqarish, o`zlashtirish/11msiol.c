#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){

    system("cls");
    int a, b;
    printf(" a va b sonlarni kiriting: ");
    scanf("%d%d", &a, &b);
        
        printf("A va B sonlarning yig`indisi : %d\n", a + b);
        printf("A va B sonlarning ko`paytmasi : %d\n", a * b);
         if(a < 0){
            a = -(a);
        }
        if(b < 0){
            b = -(b);
        }
        printf("A ning moduli  : %d\n", a);
        printf("B ning moduli : %d\n", b);
        
    return 0;
}