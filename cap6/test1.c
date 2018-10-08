#include <stdio.h>
size_t strlen(char * string)
{
    int length = 0;
    while(*string++ != '\0')
    {
        length++;        
    }
    return length;
}
int main()
{
    printf("Hello world\n%ld",strlen("hello world"));
    return 0;
}

