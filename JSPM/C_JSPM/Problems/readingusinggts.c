#include <stdio.h>

int main() {
    FILE *fptr;
    char ch[100];

    fptr = fopen("creatingfile.txt", "r");

    if (fptr == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    while (fgets(ch, sizeof(ch), fptr) != NULL) {
        printf("%s", ch);
    }

    fclose(fptr);
    return 0;
}