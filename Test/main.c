#include <stdio.h>

int main(void) {

    char first_name[6];
    printf("Enter your first name:" );
    scanf("%s", first_name);

    char last_name[10];
    printf("Enter your last name:");
    scanf("%s", last_name);

    printf("Hello %s %s!", first_name, last_name);
}