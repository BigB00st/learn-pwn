#include <stdio.h>
#include <string.h>

unsigned long instruction()
{
    __asm__("lea 0x0(%rip), %rax");
}

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
    char buf[60];
    printf("0x%lx\n", instruction());
    gets(buf);
    return 0;
}