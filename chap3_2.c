#include<stdio.h> // program to check student pass or fail from condition

int main(){
    int hindi,marathi,english;

    printf("Enter marks in hindi:\n");
    scanf("%d",&hindi);

    printf("Enter marks in Marathi:\n");
    scanf("%d",&marathi);

    printf("Enter marks in english:\n");
    scanf("%d",&english);

    float total = (hindi + marathi + english)/3;

    if((total>=40) || hindi>33 || marathi>33 || english>33)
    {
        printf("you pass with %.2f percentage and you entered %d %d %d marks",total,hindi,marathi,english);
    }

    else{
        printf("You failed with %.2f percentage",total);
    }
    return 0;
}