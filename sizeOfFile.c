#include <stdio.h>

int main(int argc, char *argv[])
{
    int x;

    if (argc != 2)
    {
        printf("Usage: %s filename\n", argv[0]);
    }
    else
    {
        FILE *file = fopen(argv[1], "r");

        if (file == 0)
        {
            printf("Could not open file\n");
        }

        fseek(file, 0, SEEK_END);

        x = ftell(file);
        fclose(file);

        printf("The size of this file is %d Bytes\n", x);
    }
}