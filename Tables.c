#include<stdio.h>
int main()
{
    int a,n,c,i;
    scanf("%d%d",&a,&n);
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            c=i*a;
            printf("%d x %d = %d
",a,i,c);
        }
    }
}