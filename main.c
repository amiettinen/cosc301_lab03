#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <assert.h>

#include "lab03.h"


int main(int argc, char **argv) {
    const char *s = "go red sox";    
    char **tokens = tokenify(s);

    int i = 0;
    while (tokens[i] != NULL) {
        printf("%s\n", tokens[i]);
        i++;
    }

    const char *t = "another  string\t to  parse\n";
    tokens = tokenify(t);
    i = 0;
    while (tokens[i] != NULL) {
        printf("%s\n", tokens[i]);
        i++;
    }

    return 0;
}
