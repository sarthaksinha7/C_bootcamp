#include<stdio.h>
int main(){
    int x=4,y,z;
    y=--x; // first decrement then store and use
    z=x--; // first store and use then decrement
    printf("%d %d %d",x,y,z);
    return 0;
}