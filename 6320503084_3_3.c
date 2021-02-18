#include<stdio.h>
int main()
{
    int n,k,j=2;
    scanf("%d",&n);
    while(1)
    {
            if(n%j==0)
            {
                printf("%d",j);
                n=n/j;
            }
            else
            {
                j++;
            }
        if(n==0)
        {printf("%d",n);
            break;
        }
        printf("\n");
    }

    return 0;
}
