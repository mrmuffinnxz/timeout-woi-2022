#include <stdio.h>
#include <conio.h>

int main()
{
    char Al[100];
    int In, An[256] = {0};
    
    gets(Al);

    for (In = 0; Al[In] != '\0'; In++) {
        An[Al[In]]++;
        // printf("%c %d\n", Al[In], int(Al[In]));
    }
    
    for (In = 0; In < 256; In++) {
        if (An[In] != 0)
            printf("%c=%d\n", In, An[In]);
    }

    return 0;
}