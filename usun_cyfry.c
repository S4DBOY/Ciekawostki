#include <stdio.h>
#include <stdlib.h>

int usun(char*); // Usuwa cyfry z ciagu znakow.
void my_swap_chars(char* ,int); // Przerzuca znak z podanego indeksu na ostatnie miejsce w tablicy.

int main()
{
    char napis[50];
    gets(napis);
    //int liczba = usun(napis);
    //printf("%s (usunieto %i znakow)",napis,liczba);
    printf("%s (usunieto %i znakow)",napis,usun(napis));
    getchar();
    return 0;
}
int usun(char* tab)
{
    int licznik = 0, i = 0;
    while(tab[i] != '\0')
    {
        if(tab[i] >= '0' && tab[i] <= '9')
        {
            my_swap_chars(tab,i);
            licznik++;
            i = i-1; // musi cofnac licznik o jeden poniewaz pomija druga cyfre jezeli wystepuje po pierwszej cyfrze.
        }
        i++;
    }
    return licznik;
}
void my_swap_chars(char* tab,int indeks)
{
    char tmp = tab[indeks];
    for(int i = indeks;i < 49; ++i)
    {
        tab[i] = tab[i+1];
    }
    tab[49] = tmp;
}
