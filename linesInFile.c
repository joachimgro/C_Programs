#include <stdio.h>

int main(int argc, char *argv[])
{
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
        else
        {
            int x, count = 0;

            while ((x = fgetc(file)) != EOF)
            {
                if (x == 10)
                {
                    count++;
                }
            }
            printf("%d is the amount of lines.\n", count);
            fclose(file);
        }
    }
}