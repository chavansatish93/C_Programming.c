//storing multiplication table using 2d array of different numbers for eg:2,7,9

#include<stdio.h>

int main(){
    int arr[3][10];

    for(int i=0;i<10;i++)
    {
        arr[0][i]=2*(i+1);
    }
   printf("The table of 2 is:\n");
    for(int i=0;i<10;i++)
    {
        printf("2 x %d =%d\n",i+1,arr[0][i]);
    }

    for(int i=0;i<10;i++)
    {
        arr[1][i]=7*(i+1);
    }
   printf("The table of 7 is:\n");
    for(int i=0;i<10;i++)
    {
        printf("7 x %d =%d\n",i+1,arr[1][i]);
    }

    for(int i=0;i<10;i++)
    {
        arr[2][i]=9*(i+1);
    }
   printf("The table of 9 is:\n");
    for(int i=0;i<10;i++)
    {
        printf("9 x %d =%d\n",i+1,arr[2][i]);
    }
    return 0;
}