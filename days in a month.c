#include <stdio.h>
int main()
{
    int n;
    printf("enter a number b/w 1-12: \n");
    scanf("%d", &n);

    switch(n)
    {
        case 1: printf("jan-31");
        break;
        case 2: printf("feb-28");
        break;
        case 3: printf("mar-31");
        break;
        case 4: printf("apr-30");
        break;
        case 5: printf("may-31");
        break;
        case 6: printf("jun-30");
        break;
        case 7: printf("jul-31");
        break;
        case 8: printf("aug-31");
        break;
        case 9: printf("sep-30");
        break;
        case 10: printf("oct-31");
        break;
        case 11: printf("nov-30");
        break;
        case 12: printf("feb-31");
        break;
    }
}
