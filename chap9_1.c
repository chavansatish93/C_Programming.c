//program to create two dimensional vector using structure

#include<stdio.h>
struct vector{
   int x;
   int y;
};
int main(){
    struct vector v1,v2;

    v1.x = 23;
    v1.y = 24;
    v2.x = 33;
    v2.y = 34;

    printf("X dimension of %d and Y dimension of %d\n",v1.x,v1.y);
    printf("X dimension of %d and Y dimension of %d\n",v2.x,v2.y);
    return 0;
}