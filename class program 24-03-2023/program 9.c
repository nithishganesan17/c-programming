//9. To write a C code to implement Nested Structure concept 
#include <stdio.h>

struct date {
    int day;
    int month;
    int year;
};

struct student {
    int id;
    char name[50];
    struct date birthdate;
};

int main() {
    struct student s;
    
    s.id = 1001;
    strcpy(s.name, "John Doe");
    s.birthdate.day = 1;
    s.birthdate.month = 1;
    s.birthdate.year = 2000;
    
    printf("Student ID: %d\n", s.id);
    printf("Student name: %s\n", s.name);
    printf("Student birthdate: %d/%d/%d\n", s.birthdate.day, s.birthdate.month, s.birthdate.year);
    
    return 0;
}
 
