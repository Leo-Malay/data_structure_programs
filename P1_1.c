/*
*   A program to display marks of 3 subjects along with their average and total
*   @Author: Malay Bhavsar
*/

#include <stdio.h>
#include <string.h>

// Defining the structure of student data.
struct student
{
    char name[20];
    int sub[3];
};

// Stating the main function.
int main()
{

    int num, i, j; // Number of students,i,j.
    printf("Enter number of students: ");
    scanf("%d", &num);
    struct student s[num];

    // Taking data as input.
    printf("Enter the following details..\n");
    for (i = 0; i < num; i++)
    {
        printf("Student No. %d\n", i);
        printf("Name:");
        scanf("%s", s[i].name);
        for (j = 0; j < 3; j++)
        {
            printf("Marks of sub%d: ", i);
            scanf("%d", &s[i].sub[j]);
        }
    }

    // Displaying the data.
    for (i = 0; i < num; i++)
    {
        int sum = s[i].sub[0] + s[i].sub[1] + s[i].sub[2];
        float average = sum / (float)3;
        printf("\n------------------------------------------------------\n");
        printf("No.%d\n", i);
        printf("Name: %s\n", s[i].name);
        printf("Total: %d\n", sum);
        printf("Average: %0.2f", average);
    }
    return 0;
}