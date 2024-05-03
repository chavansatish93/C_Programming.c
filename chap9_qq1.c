// Structure to store details of 3 employees using direct input

#include <stdio.h>
#include <string.h>

struct employee {
    int id;
    char name[50];
    char dept[50];
    float salary;
};

int main() {
    struct employee e1, e2, e3;
    e1.id = 101;
    strcpy(e1.name, "Satish Chavan");
    strcpy(e1.dept, "IT");
    e1.salary = 45000.35;

    e2.id = 102;
    strcpy(e2.name, "Ankush Rathod");
    strcpy(e2.dept, "HR");
    e2.salary = 34000.95;

    e3.id = 103;
    strcpy(e3.name, "Durvesh Patil");
    strcpy(e3.dept, "QA");
    e3.salary = 42000.75;

    printf("id :%d\n", e1.id);
    printf("name :%s\n", e1.name);
    printf("dept :%s\n", e1.dept);
    printf("salary :%f\n", e1.salary);
    printf("\n");

    printf("id:%d\n", e2.id);
    printf("name :%s\n", e2.name);
    printf("dept :%s\n", e2.dept);
    printf("salary :%f\n", e2.salary);

    printf("\n");

    printf("id :%d\n", e3.id);
    printf("name :%s\n", e3.name);
    printf("dept :%s\n", e3.dept);
    printf("salary :%f\n", e3.salary);

    return 0;
}

