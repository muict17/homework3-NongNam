#include<stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    int arr[n];

    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i=0, j=1; i<n; i++, j++)
    {
        if(arr[i]!=j)
        {
            printf("%d ", j);
            i--;
        }
    }

    printf("\n");

    return 0;
}