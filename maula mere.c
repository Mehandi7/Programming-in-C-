#include <stdio.h>
#include <windows.h>

int main()
{

    char *lyrics[] = {
        "Aankhein Teri Kitni Haseen........",
        "Ki Inkaa Aashiq, Mein Ban Gayaa Hoon.",
        "Mujhko Basaa Le, Iname Tu.....",
         "Ishq hai....",
        "Maula mere maula mere",
         "Maula mere maula mere",
    };

    int delay[] = {0.8, 0.8, 0.7, 0.6, 0.8,};

    printf("Now Playing🎵:  Maula Mere Maula❤️\n\n");
    Sleep(1.2);

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; lyrics[i][j] != '\0'; j++)
        {
            printf("%c", lyrics[i][j]);
            fflush(stdout);
            Sleep(220); // typing effect
        }
        printf("\n");
        Sleep(delay[i]); // line delay
    }

    return 0;
}