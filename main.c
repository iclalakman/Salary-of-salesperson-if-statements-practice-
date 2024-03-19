#include <stdio.h>
int main() {
    char status;

    printf("Please enter the status of the salesperson (s/j):");
    scanf("%c", &status);

    if (status == 's')
        printf("The salary of the senior salesperson is $800 per week.");
    else if (status == 'j')
        printf("The salary of the junior salesperson is $375 per week.");

    return 0;
}
