#include<stdio.h>

int main()
{
    int n, c=0;

    scanf("%d", &n);

    char a[n];

    for(int i=0; i<n; i++)
    {
        scanf(" %c", &a[i]);

        if(a[i]=='(')
        {
            c++;
        } else if(a[i]==')')
        {
            c--;
        }

        if(c<0)
        {
            printf("Incorrect\n");
            return 0;
        }
    } 

    if(c==0)
        {
            printf("Correct\n");
        } else printf("Incorrect\n"); 

        return 0;
}