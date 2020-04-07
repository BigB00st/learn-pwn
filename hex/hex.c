#include <stdio.h>

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
    int input;
    scanf("%d", &input);
    getchar();
    if (input == 0xdeadbeef)
    {
        win();
    }
    return 0;
}
