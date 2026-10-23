#include <unistd.h>

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        write(1, "\n", 1);
        return (0);
    }

    int a = 0;

    while (argv[1][a])
        a++;

    // Skip trailing spaces and tabs
    while (a > 0 && (argv[1][a - 1] == ' '
                || argv[1][a - 1] == '\t'))
        a--;

    int rightEndingIndex = a;

    // Find the beginning of the last word
    while (a > 0 && argv[1][a - 1] != ' '
                && argv[1][a - 1] != '\t')
        a--;

    int leftStartingIndex = a;

    // Print the last word
    while (leftStartingIndex < rightEndingIndex)
    {
        write(1, &argv[1][leftStartingIndex], 1);
        leftStartingIndex++;
    }

    write(1, "\n", 1);
    return (0);
}