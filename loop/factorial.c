#include<stdio.h>
int main(){
    int n;
    printf("Enter a Number :");
    scanf("%d",&n);
    int fac=1;
    while(n>0){
        fac = fac*n;
        n--;
    }
    printf("%d",fac);
    return 0;
}