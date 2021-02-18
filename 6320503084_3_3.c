#include<stdio.h>
int main()
{
    int n,k,j=2;
    scanf("%d",&n);
    while(1)
    {
        if(n%j==0)
        {
            printf("%d\n",j);
            n=n/j;
        }
        else if(n==1)
        {
           printf("%d",n-1);
            break;
        }
        else
        {
            j++;
        }
    }

    return 0;
}
