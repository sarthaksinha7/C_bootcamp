#include<stdio.h>
int main(){
    int a;
    printf("Enter a value :");
    scanf("%d",&a);
    if (a<0)
    {
        a=a*(-1);
    }
    printf("The absolute value of the given number is %d",a);
    return 0;
}