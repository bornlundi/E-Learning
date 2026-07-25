// headers imports
#include <cs50.h>
#include <stdio.h>

// main function
int main(void)
{
    // prompt user for name
    string name = get_string("What's your name? ");
    // print hello name
    printf("hello, %s\n", name);
}
