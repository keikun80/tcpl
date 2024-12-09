#include <stdio.h> 

void strcat2(char [], char []);
int main(int argc, char** argv)
{ 
  char s[30] = "hello world"; 
  char t[10]= "fdsf "; 

  strcat2(s, t);
  printf("%s\n", s);
  return 0;
} 
void strcat2(char s[], char t[])
{
  int i, j;
  i = j = 0;
  while (s[i] != '\0') 
    i++; 
  while ((s[i++] = t[j++]) != '\0') 
    ;
}
