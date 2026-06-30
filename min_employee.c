// Mini Employee Management System using Functions

#include <stdio.h>

// Structure to store employee details
struct Employee
{
    int empID;
    char name[50];
    char department[50];
    float salary;
};

// Function to add employee details
void addEmployee(struct Employee *e)
{
    printf("\nEnter Employee ID: ");
    scanf("%d", &e->empID);

    printf("Enter Employee Name: ");
    scanf(" %[^\n]", e->name);

    printf("Enter Department: ");
    scanf(" %[^\n]", e->department);

    printf("Enter Salary: ");
    scanf("%f", &e->salary);

    printf("\nEmployee Added Successfully!\n");
}

// Function to update salary
void updateSalary(struct Employee *e)
{
    float newSalary;

    printf("\nEnter New Salary: ");
    scanf("%f", &newSalary);

    e->salary = newSalary;

    printf("Salary Updated Successfully!\n");
}

// Function to display employee details
void displayEmployee(struct Employee e)
{
    printf("\n------ Employee Details ------\n");
    printf("Employee ID : %d\n", e.empID);
    printf("Name        : %s\n", e.name);
    printf("Department  : %s\n", e.department);
    printf("Salary      : %.2f\n", e.salary);
}

int main()
{
    struct Employee emp;
    int choice;

    do
    {
        printf("\n====== MINI EMPLOYEE MANAGEMENT SYSTEM ======\n");
        printf("1. Add Employee\n");
        printf("2. Update Salary\n");
        printf("3. Display Employee Details\n");
        printf("4. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addEmployee(&emp);
                break;

            case 2:
                updateSalary(&emp);
                break;

            case 3:
                displayEmployee(emp);
                break;

            case 4:
                printf("\nThank You for Using the Employee Management System!\n");
                break;

            default:
                printf("\nInvalid Choice! Please Try Again.\n");
        }

    } while(choice != 4);

    return 0;
}