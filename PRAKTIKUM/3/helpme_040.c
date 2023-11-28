#include <stdio.h>
int main()
{
    char greetings[] = "I'm Happy";
    greetings[0] = 'H';
    greetings[1] = 'e';
    greetings[2] = 'l';
    greetings[3] = 'p';
    greetings[4] = ' ';
    greetings[5] = 'M';
    greetings[6] = 'e';
    greetings[7] = ' ';
    greetings[8] = '!';
    printf("%s", greetings);
    return 0;
}