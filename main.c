#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch1, ch2;

    ch1 = getchar();

    if(ch1>='a'&&ch1<='z')
       ch2 = ch1 - 32;

    else ch2 = ch1 + 32;

    printf("the corresponding character is:%c", ch2);

    return 0;
}
