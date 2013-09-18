#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
    char my_string[] = "go    red\t sox\n   ";
    const char *sep = " \t\n";
    char *word, *tmp;

    for (word = strtok_r(my_string, sep, &tmp);
         word != NULL;
         word = strtok_r(NULL, sep, &tmp)) {
         printf ("Next word: <%s> \n", word);
    }

    return 0;
}
