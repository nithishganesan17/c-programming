#include <stdio.h>
struct Student {
    int number;
    char grade;
};

int main() {
    int n,i;
    printf("Enter No. Students: ");
    scanf("%d", &n);
    int num_as = 0, num_bs = 0, num_cs = 0, num_ds = 0, num_fs = 0;
    struct Student students[n];
    for (i = 0; i < n; i++) {
        printf("Enter student %d number, grade: ", i+1);
        scanf("%d %c", &students[i].number, &students[i].grade);
        switch (students[i].grade) {
            case 'A':
                num_as++;
                break;
            case 'B':
                num_bs++;
                break;
            case 'C':
                num_cs++;
                break;
            case 'D':
                num_ds++;
                break;
            case 'F':
                num_fs++;
                break;
            default:
                printf("Invalid grade entered for student %d.\n", i+1);
        }
    }
    for (i = 0; i < n; i++) {
        printf("Student %d details:\n", i+1);
        printf("Number: %d\n", students[i].number);
        printf("Grade: %c\n", students[i].grade);
        printf("Total no. A: %d, B: %d, C: %d, D: %d, F: %d\n", num_as, num_bs, num_cs, num_ds, num_fs);
    }
    return 0;
}


