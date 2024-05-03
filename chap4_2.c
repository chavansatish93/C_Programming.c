//printing table in reverse order

#include<stdio.h>

int main(){
    int i,n;

    printf("Enter the number the table want:\n");
    scanf("%d",&n);

     printf("-*-*-*-The table of %d is-*-*-*-\n",n);

    for(i=10;i>0;i--)
    {
        printf("%d x %d = %d\n",n,i,i*n);
    }
    return 0;
}