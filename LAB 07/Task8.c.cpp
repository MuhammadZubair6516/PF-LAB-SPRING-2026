#include <stdio.h>
int main() {
    char str[100]; int i;
    printf("Enter message: ");
    scanf("%[^\n]",str);
    printf("The Output is :");
    for(i=0 ; str[i];i++)
    {
    if(!((str[i]>='a'&& str[i]<='z')||(str[i]>='A'&& str[i]<='Z'))) 
    printf("%c",str[i]);
    }
    }
    