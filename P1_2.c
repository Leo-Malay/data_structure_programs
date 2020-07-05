/*
*   A program to disply name of student by searching through enrollment number.
*   @Author: Malay Bhavsar
*/

#include <stdio.h>
#include <string.h>

// Defining the structure of student data.
struct student
{
    char name[20];
    long int enroll;
};

// Stating the main function.
int main()
{

    int num, i, j, l; // Number of students,i,j,l.
    long int k = 1;
    printf("Enter number of students: ");
    scanf("%d", &num);
    struct student s[num];

    // Taking data as input.
    printf("Enter the following details..\n");
    for (i = 0; i < num; i++)
    {
        printf("Enroll. No.:");
        scanf("%ld", &s[i].enroll);
        printf("Name:");
        scanf("%s", s[i].name);
    }

    // Displaying the data.
    for (i = 0; i < num; i++)
    {
        printf("\n------------------------------------------------------\n");
        printf("Enroll. No. %ld\n", s[i].enroll);
        printf("Name: %s\n", s[i].name);
    }
    printf("\n-------------------------------------------------------------\n");
    printf("\t\tSearch by Enrollment number!\n");
    printf("-------------------------------------------------------------\n");
    printf("Enter 0 to exit!");
    while (k != 0)
    {
        printf("\n\nEnter Enroll. No.:");
        scanf("%ld", &k);
        l = 0;
        while (k != s[l].enroll && l < num)
        {
            l += 1;
        }
        printf("Name: %s", s[l].name);
    }
    return 0;
}