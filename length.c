#include <cs50.h>
#include <string.h>
#include <stdio.h>

int main(void)
{
    string name = get_string("Name: ");
    printf("Hello, %s\n", name);
    int n = strlen(name);

    printf("Your name is %i characters long\n", n);
}
