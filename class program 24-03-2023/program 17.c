//17. Program to find student details using nested structure
 #include <stdio.h>

struct Address {
    char street[50];
    char city[50];
    char state[50];
    char country[50];
};

struct Student {
    int rollNo;
    char name[50];
    int age;
    struct Address address;
};

int main() {
    struct Student student = {101, "John Doe", 20, {"123 Main St", "New York", "NY", "USA"}};

    printf("Roll No: %d\n", student.rollNo);
    printf("Name: %s\n", student.name);
    printf("Age: %d\n", student.age);
    printf("Address: %s, %s, %s, %s\n", student.address.street, student.address.city, student.address.state, student.address.country);

    return 0;
}

