//Display this AP - 1,3,5,7,....... upto 'n' th terms

// With mathematics


#include<stdio.h>
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    for(int i=1;i<=2*n-1;i=i+2)  // d=2, a=1,  a+(n-1)d = 1+(n-1)2 = 2n-1
    printf("%d ",i);
    return 0;
}



// without mathematics


#include<stdio.h>
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    int a=1;
    for(int i=1;i<=n;i++)  // d=2, a=1,  a+(n-1)d = 1+(n-1)2 = 2n-1
    {
    printf("%d ",a);
    a = a+2;
    }
    return 0;
}