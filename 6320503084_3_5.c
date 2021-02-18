#include<stdio.h>
int main()
{
    int n,j=2,ar[3],i=0,ln;
    scanf("%d",&n);
    ln=n;
    while(1)
    {
        if(n%j==0)
        {
            n=n/j;
            ar[i]=j;
            i++;
        }
        else if(n==1)
        {
            break;
        }
            j++;
    }

        if(ar[0]==ar[1]||ar[0]==ar[2]||ar[1]==ar[2])
    {
          printf("%d is a not Lucky Number.",ln);
    }
    else
    {
        printf("%d is a Lucky Number.",ln);
    }

    return 0;
}

