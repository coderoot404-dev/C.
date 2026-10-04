#include <stdio.h>
#include <string.h>

int main()
{
    char name [40];
    printf("Enter your name please: ");
    fgets(name, sizeof(name),stdin);

    printf("Hello World\n");
    printf("Your name is: %s\n", name);
    return 0;
}
