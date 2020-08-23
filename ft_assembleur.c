#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char assembleur(char **ptr_str, char *ass1, char *ass2)
{
    int i = 0;
    int x = 0;
    char *str = malloc(sizeof(char) * (strlen(ass1)  + strlen(ass2) + 1));

    while(ass1[x])
    {
        str[x] = ass1[x];
        x++;
    }
    i = x;
    x = 0;
    while(ass2[x])
    {
        str[i] = ass2[x];
        x++;
        i++;
    }
    str[i] = '\0';
    *ptr_str = str;



}
int main()
{
    int x = 0;

    char ass1[] = "je suis une tchoin";
    char ass2[] = "tu ne ressemble a r";

    char **str;

    assembleur(str, ass1, ass2);
    printf("%s", *str);
}
