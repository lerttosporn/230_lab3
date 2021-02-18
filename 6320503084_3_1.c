#include<stdio.h>
int main()
{
    int ar[5][4],a,i,j,x[5],h,l=0;
    for(i=0; i<5; i++)
    {
        for(j=0; j<4; j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }

    for(i=0; i<5; i++)
    {
        x[i]=0;
        for(j=0; j<4; j++)
        {

            x[i]=x[i]+ar[i][j];
        }
    }
    h=x[0];
    for(i=1; i<5; i++)
    {
        if(h<x[i])
           {
               h=x[i];
               l=+1;
           }

    }
    printf("%d %d",l,h);
    return 0;
}
