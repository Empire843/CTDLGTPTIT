#include <stdio.h>
#include <string.h>
    #include <cctype>
main()
{
    char s[200], i;
    gets(s);
    int chu = 0, so = 0, khac = 0;

    for (i = 0; i <= strlen(s); i++)
    {

        if (isalpha(s[i]))
        {
            chu++;
        }
        if (isdigit(s[i]))
            so++;
        if (!isalpha(s[i]) && !isdigit(s[i]))
            khac++;
    }
    printf("%d %d %d", chu, so, khac - 1);
}