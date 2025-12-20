#include <stdio.h>
#include <windows.h>

int main()
{

    char *lyrics[] = {
        "Mareez-e-ishq hoon main",
        "kar de dawa.............",
        "Haath rakh de...",
        "tu dil pe zara."
    };

    int delay[] = {30, 0.8, 20, 30};

    printf("Now Playing🎵:  This is for you❤️\n\n");
    Sleep(1.2);

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; lyrics[i][j] != '\0'; j++)
        {
            printf("%c", lyrics[i][j]);
            fflush(stdout);
            Sleep(110); // typing effect
        }
        printf("\n");
        Sleep(delay[i]); // line delay
    }

    return 0;
}