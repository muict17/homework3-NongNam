#include<stdio.h>

int main()
{
    int n, swap;

    scanf("%d", &n);

    int arr[n];

    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=swap;
            }
        }
    }

    for(int i=0, j=arr[0]; i<n; i++, j++)
    {
        if(arr[i]!=j && j>=arr[0] && j<=arr[n-1])
        {
            printf("%d ", j);
            i--;
        }
    }

    printf("\n");

    return 0;
}