#include<stdio.h>
int main(){
    int m,n;
    printf("Enter number of rows : ");
    scanf("%d",&m);
    printf("Enter number of columns : ");
    scanf("%d",&n);    
    for(int i=1;i<=m;i++) // no of lines || rows because of \n
    {
        for(int i=1;i<=n;i++) // no of * in each lines
        {
        printf("*");
        }
        printf("\n");
    }
    return 0;
}