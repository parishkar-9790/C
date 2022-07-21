#include <stdio.h>
#include <stdlib.h>

struct date
{
    int day;
    int month;
    int year;
};
struct student_record
{
    char name[40];
    struct date dob;
    int marks;
};
void printRankings(struct student_record student[], int n)
{
    printf("\t\tRank\t\tName\t\tMarks\t\tDob\n");
    int p=n-1;
    for (int i = 0; i < n; i++)
    {
        printf("\t\t%d\t\t%s\t\t%d\t\t%d/%d/%d\n", (i + 1), student[p-i].name, student[p-i].marks, student[p-i].dob.day, student[p-i].dob.month, student[p-i].dob.year);
    }
}

void swap(struct student_record *n1, struct student_record *n2)
{
    struct student_record temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

void bubblesort(struct student_record *student, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (student[j].marks > student[j + 1].marks)
                swap(&student[j], &student[j + 1]);
        }
    }
}

int main()
{
    printf("Enter the number of students-> ");
    int n;
    scanf("%d", &n);
    struct student_record student[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter The Student Name %d Marks and DOB(date month year)", (i + 1));
        scanf("%s %d %d %d %d", &student[i].name, &student[i].marks, &student[i].dob.day, &student[i].dob.month, &student[i].dob.year);
        printf("\n");
    }
    bubblesort(student, n);
    printRankings(student, n);
    return 0;
}