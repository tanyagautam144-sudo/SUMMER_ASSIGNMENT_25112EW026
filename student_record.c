// Student Record System using Arrays and Strings

#include <stdio.h>

int main()
{
    int rollNo[100];
    int marks[100];
    char name[100][50];
    int n, i;

    // Input number of students
    printf("Enter Number of Students: ");
    scanf("%d", &n);

    // Input student details
    for(i = 0; i < n; i++)
    {
        printf("\nEnter Details of Student %d\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &rollNo[i]);

        printf("Enter Name: ");
        scanf(" %[^\n]", name[i]);

        printf("Enter Marks: ");
        scanf("%d", &marks[i]);
    }

    // Display student records
    printf("\n========== STUDENT RECORDS ==========\n");

    printf("\nRoll No\tName\t\tMarks\n");
    printf("---------------------------------------\n");

    for(i = 0; i < n; i++)
    {
        printf("%d\t%-15s%d\n", rollNo[i], name[i], marks[i]);
    }

    return 0;
}