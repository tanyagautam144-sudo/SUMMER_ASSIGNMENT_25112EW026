//Write a program to Create salary management system.
#include<stdio.h>
#include <stdio.h>

// Structure to store employee details
struct Employee
{
    int empId;
    char name[50];
    char department[30];
    float basicSalary;
    float hra;
    float da;
    float deductions;
    float netSalary;
};

// Function Prototypes
void addEmployee(struct Employee e[], int *count);
void viewEmployees(struct Employee e[], int count);
void searchEmployee(struct Employee e[], int count);
void updateEmployee(struct Employee e[], int count);
void deleteEmployee(struct Employee e[], int *count);
void calculateSalary(struct Employee e[], int count);

int main()
{
    struct Employee e[100];
    int count = 0;
    int choice;

    do
    {
        printf("\n===== SALARY MANAGEMENT SYSTEM =====\n");
        printf("1. Add Employee\n");
        printf("2. View Employees\n");
        printf("3. Search Employee\n");
        printf("4. Update Employee\n");
        printf("5. Delete Employee\n");
        printf("6. Calculate Salary\n");
        printf("7. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addEmployee(e, &count);
                break;

            case 2:
                viewEmployees(e, count);
                break;

            case 3:
                searchEmployee(e, count);
                break;

            case 4:
                updateEmployee(e, count);
                break;

            case 5:
                deleteEmployee(e, &count);
                break;

            case 6:
                calculateSalary(e, count);
                break;

            case 7:
                printf("\nThank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 7);

    return 0;
}

// Function to Add Employee
void addEmployee(struct Employee e[], int *count)
{
    printf("\nEnter Employee ID: ");
    scanf("%d", &e[*count].empId);

    printf("Enter Name: ");
    scanf(" %[^\n]", e[*count].name);

    printf("Enter Department: ");
    scanf(" %[^\n]", e[*count].department);

    printf("Enter Basic Salary: ");
    scanf("%f", &e[*count].basicSalary);

    printf("Enter HRA: ");
    scanf("%f", &e[*count].hra);

    printf("Enter DA: ");
    scanf("%f", &e[*count].da);

    printf("Enter Deductions: ");
    scanf("%f", &e[*count].deductions);

    e[*count].netSalary = e[*count].basicSalary +
                          e[*count].hra +
                          e[*count].da -
                          e[*count].deductions;

    (*count)++;

    printf("Employee Added Successfully!\n");
}

// Function to View Employees
void viewEmployees(struct Employee e[], int count)
{
    int i;

    if(count == 0)
    {
        printf("No Records Found!\n");
        return;
    }

    for(i = 0; i < count; i++)
    {
        printf("\nEmployee %d\n", i + 1);
        printf("Employee ID : %d\n", e[i].empId);
        printf("Name        : %s\n", e[i].name);
        printf("Department  : %s\n", e[i].department);
        printf("Basic Salary: %.2f\n", e[i].basicSalary);
        printf("HRA         : %.2f\n", e[i].hra);
        printf("DA          : %.2f\n", e[i].da);
        printf("Deductions  : %.2f\n", e[i].deductions);
        printf("Net Salary  : %.2f\n", e[i].netSalary);
    }
}

// Function to Search Employee
void searchEmployee(struct Employee e[], int count)
{
    int id, i, found = 0;

    printf("Enter Employee ID: ");
    scanf("%d", &id);

    for(i = 0; i < count; i++)
    {
        if(e[i].empId == id)
        {
            printf("\nEmployee Found\n");
            printf("Name       : %s\n", e[i].name);
            printf("Department : %s\n", e[i].department);
            printf("Net Salary : %.2f\n", e[i].netSalary);

            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Employee Not Found!\n");
}

// Function to Update Employee
void updateEmployee(struct Employee e[], int count)
{
    int id, i, found = 0;

    printf("Enter Employee ID: ");
    scanf("%d", &id);

    for(i = 0; i < count; i++)
    {
        if(e[i].empId == id)
        {
            printf("Enter New Basic Salary: ");
            scanf("%f", &e[i].basicSalary);

            printf("Enter New HRA: ");
            scanf("%f", &e[i].hra);

            printf("Enter New DA: ");
            scanf("%f", &e[i].da);

            printf("Enter New Deductions: ");
            scanf("%f", &e[i].deductions);

            e[i].netSalary = e[i].basicSalary +
                             e[i].hra +
                             e[i].da -
                             e[i].deductions;

            printf("Record Updated Successfully!\n");

            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Employee Not Found!\n");
}

// Function to Delete Employee
void deleteEmployee(struct Employee e[], int *count)
{
    int id, i, j, found = 0;

    printf("Enter Employee ID: ");
    scanf("%d", &id);

    for(i = 0; i < *count; i++)
    {
        if(e[i].empId == id)
        {
            for(j = i; j < *count - 1; j++)
            {
                e[j] = e[j + 1];
            }

            (*count)--;

            printf("Employee Deleted Successfully!\n");

            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Employee Not Found!\n");
}

// Function to Calculate Salary
void calculateSalary(struct Employee e[], int count)
{
    int id, i, found = 0;

    printf("Enter Employee ID: ");
    scanf("%d", &id);

    for(i = 0; i < count; i++)
    {
        if(e[i].empId == id)
        {
            e[i].netSalary = e[i].basicSalary +
                             e[i].hra +
                             e[i].da -
                             e[i].deductions;

            printf("\nNet Salary = %.2f\n", e[i].netSalary);

            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Employee Not Found\n");
}