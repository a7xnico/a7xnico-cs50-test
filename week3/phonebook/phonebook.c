#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string names[] = {"Carter", "David", "John"};
    string numbers[] = {"+1-617-495-1000", "+1-617-485-1000", "+1-949-468-2750"}; // store numbers as strings too

    string name = get_string("Name: ");
    for (int i = 0; i < 3; i++)
    {
        if(strcmp(names[i], name) == 0)
        {
            printf("Found %s\n", numbers[i]);
            return 0;
        }
    }
    printf("Not Found\n");
    return 1;
}