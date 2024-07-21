// C Program to Store Information
// of Students Using Structure
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Create the student structure
struct Student
{
    char *name;
    int roll_number;
    int age;
    double total_marks;
    char *school;
};

// Driver code
int main()
{
    int i = 0, n = 5;
    // Create the student's structure variable
    // with n Student's records
    struct Student student[n];

    // Get the students data
    student[0].roll_number = 1;
    student[0].name = "Geeks1";
    student[0].age = 12;
    student[0].total_marks = 78.50;
    student[0].school = "GEEKS FOR GEEKS";

    student[1].roll_number = 5;
    student[1].name = "Geeks5";
    student[1].age = 10;
    student[1].total_marks = 56.84;
    student[1].school = "GEEKS FOR GEEKS";

    student[2].roll_number = 2;
    student[2].name = "Geeks2";
    student[2].age = 11;
    student[2].total_marks = 87.94;
    student[2].school = "GEEKS FOR GEEKS";

    student[3].roll_number = 4;
    student[3].name = "Geeks4";
    student[3].age = 12;
    student[3].total_marks = 89.78;
    student[3].school = "GEEKS FOR GEEKS";

    student[4].roll_number = 3;
    student[4].name = "Geeks3";
    student[4].age = 13;
    student[4].total_marks = 78.55;
    student[4].school = "GEEKS FOR GEEKS";

    // Print the Students information
    printf("Student Records:\n\n");
    for (i = 0; i < n; i++)
    {
        printf("\tName = %s\n", student[i].name);
        printf("\tRoll Number = %d\n", student[i].roll_number);
        printf("\tAge = %d\n", student[i].age);
        printf("\tTotal Marks = %0.2f\n", student[i].total_marks);
        printf("\tSchool = %s\n\n", student[i].school);
    }
    return 0;
}