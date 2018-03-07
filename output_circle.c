#include <stdio.h>
#include <stdlib.h>
#define PI 3.1416
void area(float radius){
    float area= PI*radius*radius;
    printf("Area :%.2f\n",area);
}
void circumference(float radius){
    float circumference= 2*PI*radius;
    printf("Circumference :%.2f\n",circumference);
}
int main()
{
    float radius=5.0;
    area(radius);
    circumference(radius);

    return 0;
}

/*
*/
