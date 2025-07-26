#include <stdio.h>

int main() {
    char employeeID[11]; 
    int workingHours;
    float salaryPerHour, totalSalary;

    printf("Input the Employees ID: \n");
    scanf("%10s", employeeID);

    printf("Input the working hrs: \n");
    scanf("%d", &workingHours);

    printf("Salary amount/hr: \n");
    scanf("%f", &salaryPerHour);

    totalSalary = workingHours * salaryPerHour;

    printf("Employee ID = %s\n", employeeID);
    printf("Total Salary = U$ %.2f\n", totalSalary);

    return 0;

}
