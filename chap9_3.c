//program to illustrate the use of arrow operator 

#include<stdio.h>
#include<string.h>

struct satish {
   char fullName[100];
   int rollNum;
   char branch[10];
};

int main() {
    struct satish v1;

    strcpy(v1.fullName, "Satish Vasant Chavan");
    v1.rollNum = 13;
    strcpy(v1.branch, "E&TC");

    printf("%s\n", v1.fullName);
    printf("%d\n", v1.rollNum);
    printf("%s\n", v1.branch);

    return 0;
}
