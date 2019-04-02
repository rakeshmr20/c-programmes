#include <stdio.h>

int main()
{
    int i, j, n;

    printf("Enter value of n : ");
    scanf("%d", &n);
    //first line
    for(i=n/2; i<=n; i+=n)
    {
        for(j=1; j<n-i; j+=2)
        {
            printf(" ");
        }

        for(j=1; j<=i; j++)
        {
            printf("*");
        }

        for(j=1; j<=n-i; j++)
        {
            printf(" ");
        }

        for(j=1; j<=i; j++)
        {
            printf("*");
        }

        printf("\n");
    }
    //next line upper part
    for(i=(n/2)+2; i<=n; i+=2)
    {
        for(j=1; j<n-i; j+=2)
        {
            printf(" ");
        }

        for(j=1; j<=i; j++)
        {
            //printf("#");
            if (j==1||j==i)
            {
                printf("*");
            }
            else
                printf(" ");
        }

        for(j=1; j<=n-i; j++)
        {
            printf(" ");
        }

        for(j=1; j<=i; j++)
        {
            if (j==1||j==i)
            {
                printf("*");
            }
            else
                printf(" ");
        }

        printf("\n");
    }
    //lower part triangle
    for(i=n; i>=1; i--)
    {
        for(j=i; j<n; j++)
        {
            printf(" ");
        }

        for(j=1; j<=(i*2)-1; j++)
        {
            //printf("*");
            if (j==1||j==(i*2)-1)
            {
                printf("*");
            }
            else if (i==n && j==(i*2)/2)
            {
                printf("*");
            }
            else
                printf(" ");
        }

        printf("\n");
    }

    return 0;
}