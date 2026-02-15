#include<stdio.h>
#include<conio.h>
void main()
{
    float r,v;
    printf("Enter radius of sphere = ");
    scanf("%f",&r);
    v = 4*3.14*r*r*r/3;
    printf("volume = %f",v);
    
    getch();
}