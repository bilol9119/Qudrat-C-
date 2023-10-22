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
        printf("A ning kvadrati  : %d\n", a * a);
        printf("B ning kvadrati : %d\n", b * b);
        
    return 0;
}