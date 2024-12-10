#include <stdio.h> 
/*  
* Write the funtion  any (s1,s2), which returns the first location in the string 
s1 where any character from the string s2 occurs, or -1 if s1 contain no characters from s2 .
(The standard library function strpbrk does the same job but returns a pointer to the location)
*/ 
#define MAX 100
int any(char *, char *);
int main(int argc, char** argv)
{ 
    char s1[MAX] = "abcdefg";
    char s2[MAX] = "f";  
    int pos = 0;
    pos = any(s1, s2); 
    printf("Position is : %d \n", pos);
    return 0;
}
int any (char* s1, char* s2)
{  
    int i , j , k = 0; 
    for (i=0; s2[i] != '\0'; i++)
    {
        for (j=0; s1[j] != '\0'; j++)
        {
            if (s1[j] != s2[i])
            {
               k++; 
            } else { break; }
        }
    } 
    return k;
}
