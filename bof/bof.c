#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void win()
{
    FILE *f = fopen("flag", "r");
    char buffer[100];
    fread(buffer, sizeof(char), 100, f);
    puts(buffer);
    fclose(f);
}

int main()
{
    char buf[10];
    gets(buf);
    return 0;
}
