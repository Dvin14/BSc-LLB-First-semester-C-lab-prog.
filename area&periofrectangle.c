#include <stdio.h>

void main()
{
float length, breadth, area, perimeter;
 printf("enter the length of rectangle: ");
 scanf("%f", &length);
 printf("enter the breadth of rectangle: ");
 scanf("%f", &breadth);
 area=length*breadth;
 perimeter=2*(length+breadth);

 printf("area of rectangle= %f\n", area);
 printf("perimeter of rectangle=%f\n", perimeter);

}
