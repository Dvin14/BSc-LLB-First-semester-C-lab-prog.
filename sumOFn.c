#include <stdio.h>
int main()
{

    int n,i, sum=0;
    printf("value of n: ");
    scanf("%d",&n);

    for (i=1; i<=n; i++)
    {
        sum=sum+i;
    }
    printf("sum=%d", sum);
}
