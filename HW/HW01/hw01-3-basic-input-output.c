
#include <stdio.h>

int main() {
char firstName[50];
char lastName[50];

printf("First Name: ");
scanf("%s", firstName);
printf("Last Name: ");
scanf("%s", lastName);

printf("Output:\n");
printf("%s %s TC, RMUTL, Chiang Mai, Thailand\n", firstName, lastName);

return 0;
}