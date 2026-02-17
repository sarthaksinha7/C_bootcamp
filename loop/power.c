// Ques : Two numbers are entered through the
// keyboard. Write a program to find the value of one
// number raised to the power of another.

#include<stdio.h>
int main(){
    int b,p,result=1;
    printf("Enter base number : ");
    scanf("%d",&b);
    printf("\nEnter power : ");
    scanf("%d",&p);
    for(int i=1;i<=p;i++)//1 to p
    {
        result = result*b;
    }
    printf("%d",result);
    return 0;
}