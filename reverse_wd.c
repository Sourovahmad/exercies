#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;
    int startPosition;
    int spaceFound = 0;
    int j;

    if (argc == 2)
    {
        while (argv[1][i] != '\0')
            i++;

        i--;
        startPosition = i;

        while (i >= 0)
        {
            char currentCharecter = argv[1][i];

            if (currentCharecter == ' ' || currentCharecter == '\t')
            {
                if (i < startPosition)
                {
                    if (spaceFound)
                        write(1, " ", 1);

                    j = i + 1;
                    while (j <= startPosition)
                    {
                        write(1, &argv[1][j], 1);
                        j++;
                    }
                    spaceFound = 1;
                }
                startPosition = i - 1;
            }
            i--;
        }

        if (startPosition >= 0)
        {
            if (spaceFound)
                write(1, " ", 1);

            j = 0;
            while (j <= startPosition)
            {
                write(1, &argv[1][j], 1);
                j++;
            }
        }
    }
    write(1, "\n", 1);
    return (0);
}