/*24.	To generate employee payroll for an organization using structure.

1.	Define employee structure with fields empid, ename, basic, hra, da, it, gross and
netpay
2.	Read number of employees n
3.	Read empid, ename, and basic for n employees in an array of structure.
4.	For each employee, compute hra = 2% of basic
da = 1% of basic
gross = basic + hra + da it = 5% of basic
netpay = gross - it
5.	Print empid, ename, basic, hra, da, it, gross and netpay for all employees
*/
#include <stdio.h>
struct employee {
    int empid;
    char ename[50];
    float basic, hra, da, it, gross, netpay;
};

int main() {
    int n, i;
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    
    struct employee emp[n];
    
    for (i = 0; i < n; i++) {
        printf("\nEnter details of Employee %d:\n", i+1);
        printf("Emp ID: ");
        scanf("%d", &emp[i].empid);
        printf("Name: ");
        scanf("%s", emp[i].ename);
        printf("Basic Salary: ");
        scanf("%f", &emp[i].basic);
        
        // Compute payroll details
        emp[i].hra = 0.02 * emp[i].basic;
        emp[i].da = 0.01 * emp[i].basic;
        emp[i].gross = emp[i].basic + emp[i].hra + emp[i].da;
        emp[i].it = 0.05 * emp[i].basic;
        emp[i].netpay = emp[i].gross - emp[i].it;
    }
    
    // Print payroll details for all employees
    printf("\nEmployee Payroll Details:\n");
    printf("----------------------------\n");
    for (i = 0; i < n; i++) {
        printf("Emp ID: %d\n", emp[i].empid);
        printf("Name: %s\n", emp[i].ename);
        printf("Basic Salary: %.2f\n", emp[i].basic);
        printf("HRA: %.2f\n", emp[i].hra);
        printf("DA: %.2f\n", emp[i].da);
        printf("IT: %.2f\n", emp[i].it);
        printf("Gross Salary: %.2f\n", emp[i].gross);
        printf("Net Pay: %.2f\n", emp[i].netpay);
        printf("\n");
    }
    
    return 0;
}

