#include <stdio.h>
#include <windows.h>

int main()
{

    char *lyrics[] = {
        "Main karoon tujhe kaise yeh",
        "Bayaan Meri....",
        "jaan meri jaan",
        "tu na jaa......",
        "Abhi karz hai tujhpe woh waada",
        "Meri jaan, mujhe kya hi pata tha",
        "Rang badle yeh kaise aasmaan.....",
    };

    int delay[] = {30, 20, 40, 20, 20, 20,20};

    printf("Departure lane :\n\n");
    Sleep(1.2);

    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; lyrics[i][j] != '\0'; j++)
        {
            printf("%c", lyrics[i][j]);
            fflush(stdout);
            Sleep(50); // typing effect
        }
        printf("\n");
        Sleep(delay[i]); // line delay
    }

    return 0;
}