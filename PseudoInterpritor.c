#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#define LIMIT 2048

int main(int argc, char *argv[])
{
    if (argc > 2)
    {
        printf("ERROR:\tIvalid Number Of Arguments\nExpected: 1\tHave: %i\n", argc - 1);
        return 1;
    }
    else if (argc == 2)
    {
        // Open argv[1]
        FILE *file = fopen(argv[1], "r");
        if (file)
        {
            fgets()
            printf("File;\n%s", line);
        }
        else
        {
            printf("ERROR:\tFile Named '%s' Dosent Exist", argv[1]);
            return -1;
        }
    }
    else
    {
        printf("Not Implemented Interpritor");
        return 1;
    }
}