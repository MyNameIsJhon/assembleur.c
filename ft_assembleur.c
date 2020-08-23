#include <stdio.h>

char assembleur(char **str, char *ass1, char *ass2)
{
    int i = 0;
    int x = 0;

    while(str[i])
    {
        i++;
    }
    if(ass1[x] != '\0')
    {
        while(ass1[x])
        {
            str[i][x] = ass1[x];

            
            x++;
        }
        
        x = 0;
    }
    if(ass2[x] != '\0')
    {
        while(ass2[x])
        {
            str[i][x] = ass2[x];

            
            x++;
        }
    }


}
int main()
{
    int x = 0;
    
    char ass1[] = "je suis une tchoin";
    char ass2[] = "tu ne ressemble a r";

    char str[15][10000];

    assembleur(str, ass1, ass2);

    while(str[x])
    {
        printf("%s", str[x]);
        
        x++;
    }
}