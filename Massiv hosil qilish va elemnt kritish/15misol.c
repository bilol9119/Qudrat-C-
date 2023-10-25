#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{

    system("cls");
    int n;
    printf("Indeksga qiymat bering( (juft bolsin): ");
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        arr[i] = i + 1;
    }

    for (int i = 0; i < n; i += 2)
    {
        printf("%d  ", arr[i]);
    }
    puts("");
    for (int i = n - 1; i > 0; i -= 2)
    {
        printf("%d  ", arr[i]);
    }
    return 0;
}
