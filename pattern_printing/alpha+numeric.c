// 1     example
// AB
// 123
// ABCD
// 12345



#include<stdio.h>
int main(){
    int n ;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            for(int j=1;j<=i;j++)
            printf("%d",j);
        }
        else{
            for(int k=65;k<65+i;k++)
            printf("%c",k);
        }
        printf("\n");
    }
    return 0;
}