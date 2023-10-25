#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{

    system("cls");
    int n;
    printf("Indeksga qiymat bering(toq bolsin): ");
    scanf("%d", &n);
    int arr[n];

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
    for (int i = n - 1; i > 0; i -= 2)
    {
        printf("%d    ", arr[i]);
    }
    printf("%d   ", arr[1]);

    return 0;
}
