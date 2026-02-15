#include<stdio.h>
int main(){
    int sp,cp;
    printf("Enter cost price ");
    scanf("%d",&cp);
    printf("Enter selling price ");
    scanf("%d",&sp);
    if (sp<cp)
    {
        printf("LOSS");
    }
    else{
        printf("PROFIT");
    }
    return 0;
}