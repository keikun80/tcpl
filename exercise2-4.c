#include <stdio.h>
/*
  * Write alternative version of squeeze(s1, s2) that delete each character in s1 
* that matches any character in the string s2. 
*/ 
#define MAX 100
void squeeze(char [], char []);
int main(int argc, char** argv)
{ 
  char s1[MAX] = "onetwothreefourfive";  
  char s2[MAX] = "abdcdef"; 
  squeeze(s1, s2);
  return 0; 
} 
void squeeze(char s1[] , char s2[]) 
{ 
  int i = 0;
  int k = 0;
  int j = 0; 

  for (i = 0; s2[i] != '\0'; ++i)
  {
    for (j=k = 0; s1[k] != '\0'; ++k)
    { 
      if (s1[k] != s2[i])
      { 
        s1[j++] = s1[k];
      }
    } 
  } 
  s1[j] = '\0';
  printf("%s\n", s1);
}
