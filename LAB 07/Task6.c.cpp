#include <stdio.h>
int main() {
    char str[100]; int i=0, sumv=0, sumc=0;
    printf("Enter mixed case message: ");
    scanf("%s",str);
    while(str[i]!='\0') {
        char c = str[i];
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U') sumv++;
        else if((c>='a'&&c<='z') || (c>='A'&&c<='Z')) sumc++;
        i++;
    }
    printf("Vowels: %d\n", sumv);
    printf("Consonants: %d\n", sumc);
}