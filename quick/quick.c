#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>

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
    long randNum, input;
    srand(time(NULL));
    alarm(1);
    for (int i = 0; i < 10; ++i)
    {
        randNum = random();
        printf("%ld\n", randNum);
        scanf("%ld", &input);
        getchar();
        if (randNum != input)
        {
            exit(0);
        }
    }
    win();
    return 0;
}
