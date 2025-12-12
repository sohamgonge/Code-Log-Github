#include <stdio.h>

int main()
{
    FILE *fptr;
    char name[20];
    int roll;
    float marks;
    fptr = fopen("generated.txt", "w");
    printf("Enter your name : ");
    fgets(name, sizeof(name), stdin);
    printf("Enter your roll no : ");
    scanf("%d", &roll);
    printf("Enter your marks : ");
    scanf("%f", &marks);
    fprintf(fptr, "Name : %s", name);
    fprintf(fptr, "Roll no : %d\n", roll);
    fprintf(fptr, "Marks : %f\n", marks);
    fprintf(fptr, "Thanks for using fprintf");
    printf("\n");
    fclose(fptr);
    char c;
    fptr = fopen("generated.txt", "r");
    c = fgetc(fptr);
    while (c != EOF)
    {
        printf("%c", c);
        c = fgetc(fptr);
    }
    fclose(fptr);
    return 0;
}