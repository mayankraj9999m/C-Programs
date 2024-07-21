#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

struct Student
{
    char *name;
    int roll_number;
    int age;
    double total_marks;
    char *school;
};

void swap(struct Student *xp, struct Student *yp)
{
    struct Student temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void sort(struct Student *student, int n)
{
    printf("Sort by > (1) ID (2) Age = ");
    int ch;
    scanf("%d", &ch);
    int i, j;
    bool swapped;
    switch (ch)
    {
    case 2:
        for (i = 0; i < n - 1; i++)
        {
            swapped = false;
            for (j = 0; j < n - i - 1; j++)
            {
                if (student[j].age > student[j + 1].age)
                {
                    swap(&student[j], &student[j + 1]);
                    swapped = true;
                }
            }

            // If no two elements were swapped by inner loop,
            // then break
            if (swapped == false)
                break;
        }
        break;

    default:
        for (i = 0; i < n - 1; i++)
        {
            swapped = false;
            for (j = 0; j < n - i - 1; j++)
            {
                if (student[j].roll_number > student[j + 1].roll_number)
                {
                    swap(&student[j], &student[j + 1]);
                    swapped = true;
                }
            }

            // If no two elements were swapped by inner loop,
            // then break
            if (swapped == false)
                break;
        }
        break;
    }
}

void print_structure(struct Student *student, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\tName = %s\n", student[i].name);
        printf("\tRoll Number = %d\n", student[i].roll_number);
        printf("\tAge = %d\n", student[i].age);
        printf("\tTotal Marks = %0.2f\n", student[i].total_marks);
        printf("\tSchool = %s\n\n", student[i].school);
    }
}

int main()
{
    int n;
    printf("How many students? = ");
    scanf("%d", &n);

    // Clear the input buffer after scanf
    getchar();

    struct Student *student = (struct Student *)malloc(n * sizeof(struct Student));

    for (int i = 0; i < n; i++)
    {
        int rno, age;
        double total_marks;
        char name[50], school[50];

        printf("Name = ");
        fgets(name, 50, stdin);
        printf("School = ");
        fgets(school, 50, stdin);

        // Remove the newline character
        name[strcspn(name, "\n")] = '\0';
        school[strcspn(school, "\n")] = '\0';

        printf("Roll no. = ");
        scanf("%d", &rno);
        printf("Age = ");
        scanf("%d", &age);
        printf("Total Marks = ");
        scanf("%lf", &total_marks);
        printf("------------------------\n");
        // Clear the input buffer after scanf
        getchar();

        // Dynamically allocate memory for name and school
        student[i].name = strdup(name);
        student[i].school = strdup(school);
        student[i].roll_number = rno;
        student[i].age = age;
        student[i].total_marks = total_marks;
    }

    printf("ORIGINAL STRUCTURE : \n");
    print_structure(student, n);

    sort(student, n);

    printf("SORTED STRUCTURE : \n");
    print_structure(student, n);

    // Free allocated memory
    for (int i = 0; i < n; i++)
    {
        free(student[i].name);
        free(student[i].school);
    }
    free(student);

    return 0;
}