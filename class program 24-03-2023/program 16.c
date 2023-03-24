//16. Program to find Employee no, name, salary, doj using nested structure
#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    int empNo;
    char empName[20];
    float empSalary;
    struct Date joinDate;
};

int main() {
    struct Employee emp = {101, "John Doe", 5000.0, {12, 3, 2020}};

    printf("Employee No: %d\n", emp.empNo);
    printf("Employee Name: %s\n", emp.empName);
    printf("Employee Salary: %.2f\n", emp.empSalary);
    printf("Join Date: %d/%d/%d\n", emp.joinDate.day, emp.joinDate.month, emp.joinDate.year);

    return 0;
}

