#include <stdio.h>

int main()
{
    int n1,n2,n,hcf;
    printf("enter two no ==>> ");
    scanf("%d%d", &n1,&n2);
    if(n1>n2)
    n=n1;
    else
    n=n2;
    for(int i=2;i<=n;i++)
    {
        if(n1%i==0 && n2%i==0)
        {
            hcf=i;
        }
    }
    printf("%d",hcf);
    return 0;
}