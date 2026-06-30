#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    int marks[3];
    float total, per;
    char grade;
};

int main() {
    struct Student s;
    int i;

    printf("Roll no: ");
    scanf("%d", &s.roll);
    printf("Name: ");
    scanf("%s", s.name);

    s.total = 0;
    printf("3 subject ke marks daal: ");
    for(i = 0; i < 3; i++) {
        scanf("%d", &s.marks[i]);
        s.total += s.marks[i];
    }

    s.per = s.total / 3;

    if(s.per >= 90) s.grade = 'A';
    else if(s.per >= 80) s.grade = 'B';
    else if(s.per >= 70) s.grade = 'C';
    else if(s.per >= 60) s.grade = 'D';
    else s.grade = 'F';

    printf("\n--- REPORT CARD ---\n");
    printf("Roll: %d\nName: %s\n", s.roll, s.name);
    printf("Total: %.0f/300\n", s.total);
    printf("Percentage: %.2f%%\n", s.per);
    printf("Grade: %c\n", s.grade);

    return 0;
}