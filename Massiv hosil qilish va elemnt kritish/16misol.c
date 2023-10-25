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

    for (int i = 0; i < n; i++)
    {
        printf("Arrayning %d qiymatiga son kiritng: ", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("A[%d]  ", arr[i]);
    }
    puts("");

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == arr[n - 1])
        {
            printf("A[%d] ", arr[i]);
        }
        else
        {
            printf("A[%d] \n", arr[i]);
            printf("A[%d] \n", arr[n - 1]);
        }
        n--;
    }

    return 0;
}
