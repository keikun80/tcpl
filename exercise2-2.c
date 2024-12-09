/* 
* write a loop equivalent to the for loop above without && or ||. 
*/
#include <stdio.h> 

#define MAXLINE 1000
int main (int argc, char** argv)
{
 /* int i;
  int s[MAXLINE];
  for (i = 0; (i < MAXLINE - 1) * ((c = getchar()) != '\n') * (c != EOF); ++i)
  {
    s[i] = c;
  }
*/
  int i = 0;   
  char c;
  char s[MAXLINE];
  while (i < MAXLINE-1) { 
    c = getchar();
    if (c != '\n')
    {
      s[i++] = c;
    } else if (c != EOF) {
      s[i++] = c;
    }  
    s[i] = '\0';
  } 
  return 0;
}
