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
    int K;
    printf("K butun sonini kiriting: ");
    scanf("%d", &K);

    for (int i = 0; i < n; i++)
    {
        printf("Arrayning %d indeksiga qiymat bering: ", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d    ", arr[i]);
    }
    puts("");

    printf("\n*************************\n");
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % K == 0)
        {
            printf("%d    ", arr[i]);
        }
    }
    printf("\n*************************\n");

    return 0;
}