#include <stdio.h>
#include <string.h>

int main()
{
    char buf[100];
    printf("0x%lx\n", &buf);
    gets(buf);
    return 0;
}