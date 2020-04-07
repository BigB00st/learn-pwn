#include <stdio.h>

void exit(int status)
{
    FILE *f = fopen("flag", "r");
    char buffer[100];
    fread(buffer, sizeof(char), 100, f);
    puts(buffer);
    fclose(f);
}
