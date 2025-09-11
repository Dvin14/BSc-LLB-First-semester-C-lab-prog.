#include <stdio.h>
int main()
{
    int a;
    printf("choose an year:");
    scanf("%d", &a);

    if (a%4==0)
        {
        printf("the year is a leap year.");
    }
    else{
        printf("the year isn't a leap year");
    }

}
