#include <stdio.h>
int main()
{
    int n;
    long long factorial = 1;
    printf("enter a positive number: ");
    scanf("%d", &n);
    if(n<=0)
    {
        printf("factorial is not defined for negative numbers");
    }
    else{

        for(int i=1; i<=n; i++){
            factorial*=1;

        }
        printf("factorial %d is %11d\n", n, factorial);
    }
}
