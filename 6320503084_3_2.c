#include<stdio.h>
int main()
{
    int n,i,j,l,h=0;
    scanf("%d",&n);
    int p[n],a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d %d",&p[i],&a[i]);
    }
    for(i=0; i<n; i++)
    {
        if(p[i]==p[i+1])
        {
            a[i]=a[i]+a[i+1];
        }
        if(h<a[i])
        {
            h=a[i];
            l=i+1;
        }
    }
    printf("%d %d",l,h);
    return 0;
}
