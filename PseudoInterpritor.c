#include <stdio.h>
#define LIMIT 1024

int main(int argc, char *argv[])
{
    if (argc > 2)
    {
        printf("ERROR:\tIvalid Number Of Arguments\nExpected: 1\tHave: %i\n", argc - 1);
        return 1;
    }
    if (argc == 2)
    {
        // Open argv[1]
        FILE *file = fopen(argv[1], "r");
        if (!file)
        {
            printf("ERROR:\tFile Named '%s' Dosent Exist", argv[1]);
            return -1;
        }
    }

    char line[LIMIT];
    if (argc == 1)
    {
        // Get Line
        printf(">>> ");
        fgets(line, LIMIT, stdin);
    }
    else
    {
        // Read Line From argv[1]
    }
}