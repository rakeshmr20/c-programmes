/* C programme to count number of alphabets, vowels, digits, special characters in a given string using pointers*/
#include <stdio.h>
#define MAX_SIZE 100 // Maximum string size

int main()
{
    char str[MAX_SIZE];
    char * s = str;
    int alphabets, digits, vowels, others;

    alphabets = digits = vowels = others= 0;

    printf("Enter any string : ");//Input string from user
    gets(str);

    while(*s)
    {
    	if(*s=='A' ||*s=='E' ||*s=='I' ||*s=='O' ||*s=='U' ||*s=='a' ||*s=='e' ||*s=='i' ||*s=='o' ||*s=='u')//Check for vowels
    		vowels++;
        else if((*s >= 'a' && *s <= 'z') || (*s >= 'A' && *s <= 'Z'))//Check for alphabets
            alphabets++;
        else if(*s>='0' && *s<='9')//Check for digits
            digits++;
        else
            others++;

        s++;
    }

    printf("Alphabets = %d\n", alphabets);
    printf("vowels = %d\n", vowels);
    printf("Digits = %d\n", digits);
    printf("Special characters = %d", others);

    return 0;
}