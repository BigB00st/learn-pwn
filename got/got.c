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
    int what = 0;
    int *where = NULL;
    printf("what?\n");
    scanf("%ld", &what);
    getchar();
    printf("where?\n");
    scanf("%lp", &where);
    getchar();
    *where = what;
    exit(0);
}
