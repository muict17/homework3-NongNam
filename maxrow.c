#include<stdio.h>

int main()
{
    int n, m;

    scanf("%d %d", &n, &m);

    int arr[n][m], sum[n];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            scanf("%d", &arr[i][j]);
            sum[i]=0;
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            sum[i]+=arr[i][j];
        }
    }

    int max=sum[0];

    for(int i=0; i<n; i++)
    {
        if(max<sum[i])
        {
            max=sum[i];
        }
    }

    for(int i=0; i<n; i++)
    {
        if(max==sum[i])
        {
            printf("Row %d\n", i+1);
        }
    }
    
    return 0;
}