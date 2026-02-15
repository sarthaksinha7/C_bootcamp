// 1 1 2 3 5 8 13 21 34 55 89....... nth
// print nth


#include<stdio.h>
int main(){
    int n;
    printf("Enter the term number : ");
    scanf("%d",&n);
    int a=1,b=1;
    int sum =1;
    for(int i=1;i<=n-2;i++){
        a = b;
        b = sum;
        sum = a+b;
    }
    printf("%d",sum);
    return 0;
}