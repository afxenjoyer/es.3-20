#include <stdio.h>

int main(void)
{
    int anno;

    printf("Inserisci l'anno da verificare\n");
    scanf("%d",&anno);

    if(anno%4 == 0)
    {
        printf("L'anno da verificare è bisestile\n");
    }
    else if(anno%100 == 0 && anno%400 == 0)
    {
        printf("L'anno da verificare è bisestile\n");
    }
    else
    {
        printf("L'anno da verificare non è bisestile\n");
    }

    return 0;
}