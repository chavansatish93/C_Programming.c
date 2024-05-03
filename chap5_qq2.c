//using library function calculating area of square

#include<stdio.h>
#include<math.h>


int main(){
  int side;
  printf("Enter the value of side:\n");
  scanf("%d",&side);
  printf("The area of side is %.2f\n",pow(side,2));

  return 0;  
}

