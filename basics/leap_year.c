#include <stdio.h>
int main()
{
    printf("Enter a year :");
    int a;
    scanf("%d",&a);
    if(a%4==0)
    {
        printf("its a leap year");
    }
    else{
        printf("its not a leap year");
    }
    return 0;
}