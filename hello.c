#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string answer = get_string("What is your Name \n");
    printf("Hello %s \n", answer);
}