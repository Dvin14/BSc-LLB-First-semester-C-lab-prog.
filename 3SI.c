#include <stdio.h>
int main()
{
     float p1, p2, p3, r1, r2, r3, t1, t2, t3,
     SI1, SI2, SI3;
    printf("ENTER THE VALUE FOR p1: ");
    scanf("%f", &p1);
    printf("ENTER THE VALUE FOR r1: ");
    scanf("%f", &r1);
    printf("ENTER THE VALUE FOR t1: ");
    scanf("%f", &t1);

    SI1= (p1*r1*t1)/100;

    printf("ENTER THE VALUE FOR p2: ");
    scanf("%f", &p2);
    printf("ENTER THE VALUE FOR r2: ");
    scanf("%f", &r2);
    printf("ENTER THE VALUE FOR t2: ");
    scanf("%f", &t2);

    SI2= (p2*r2*t2)/100;

    printf("ENTER THE VALUE FOR p3: ");
    scanf("%f", &p3);
    printf("ENTER THE VALUE FOR r3: ");
    scanf("%f", &r3);
    printf("ENTER THE VALUE FOR t3: ");
    scanf("%f", &t3);

    SI3= (p3*r3*t3)/100;
    printf("SI1=%.2f", SI1);
    printf("SI2=%.2f", SI2);
    printf("SI3=%.2f", SI3);

}
