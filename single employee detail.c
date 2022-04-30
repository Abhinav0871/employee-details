#include <stdio.h>

struct Employee
{
    int  age, salary,phonenumber;
    char name[30];
};

int main()
{
    struct Employee e;

    printf("Enter the age of the Employee: ");
    scanf("%d", &e.age);

    printf("Enter the name of the Employee: ");
    getchar();
    fgets(e.name, 30, stdin);
    
    printf("Enter the phone number of the Employee: ");
    scanf("%d", &e.phonenumber);
    
    printf("Enter the salary of the Employee: ");
    scanf("%d", &e.salary);

    printf("\nEmployee Details:\n");
    printf("Employee Name: %s", e.name);
    printf("Employee age: %d\n", e.age);
    printf("Employee phone number: %d\n", e.phonenumber);
    printf("Employee salary: %d\n", e.salary);

    return 0;
}
