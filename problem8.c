#include<stdio.h>

struct student
{
    char name[100];
    int roll_number;
    int marks;
    
};

int main()
{
    struct student s1={.name="Vanya", .roll_number=25, .marks=80};

    printf("Name=%s\nRoll number=%d\nMarks=%d\n", 
    s1.name, s1.roll_number, s1.marks);



    return 0;

}