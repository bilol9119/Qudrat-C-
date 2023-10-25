#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{

    system("cls");
    int n;
    printf("Indeksga qiymat bering: ");
    scanf("%d", &n);
    int arr[n];
    int j = 1;
    for (int i = 0; i < n; i++)
    {
        arr[i] = j;
        j += 2;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }
    return 0;
}
