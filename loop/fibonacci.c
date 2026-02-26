#include<stdio.h>
int main(){
    int n,b,a,f;
    printf("Enter a number : ");
    scanf("%d",&n);
    a = 0;
    b = 1;
    
    for(int i=1;i<=n;i++)
    {
        printf("%d ",a);
        f = a+b;
        a = b;
        b = f;

    }

}