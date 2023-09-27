#include <stdio.h>

struct student
{
    int age;
    int rollno;
};

void main()
{
    struct student s1, *s2;
    s1.age = 19;
    s1.rollno = 2220038;

    printf("AGE AND ROLLNO OF STUDENT ARE: %d\t%d\n", s1.age, s1.rollno);

    s2 = &s1;

    s2->age = 18;
    s2->rollno = 2220043;

    printf("AGE AND ROLLNO OF STUDENT AFTER USING ARROW OPERATOR ARE: %d\t%d\n", s1.age, s1.rollno);
    printf("AGE AND ROLLNO OF STUDENT AFTER USING ARROW OPERATOR ARE: %d\t%d\n", s2->age, s2->rollno);
}