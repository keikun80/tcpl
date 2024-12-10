#include <stdio.h>   
#include <string.h> 
#include <ctype.h> 
#include <math.h>
/* 
* Write the function htoi(s), which converts a string of hexa-decimal digit (include an optional 0x or 0X)
* into its equivalent integer value. the allowable digit are 0 through 9, a through f, and A through F.
*/ 
int htoi(char *);
int main(int argc, char** argv)
{
  char s;
  int i = 0;
  printf("Enter Hex : ");
  scanf("%s", &s); 
  i = htoi(&s); 
  if (i > 0)
  {
    printf("%s => %d \n", &s, i);
  }
  return 0;
}  

int htoi(char *input_s)
{
  int len = 0 ;
  int retVal = 0;
  len = strlen(input_s)-1;

  if (input_s[0] == '0' && (input_s[1] == 'x' || input_s[1] == 'X'))  
  {  
    for (int i = 2; i <= len; i++)
    {  
      int temp = tolower(input_s[i]);
      if ( temp >= '0' && temp <= '9') {
        temp -=  48;
      } else if (temp >= 'a' && temp <= 'f')  {
       temp = temp - 'a' +10; 
      } else {}  
      retVal += temp * (int)pow(16, len - i);  
    }
  } else {
    retVal = -1;
  }
  return retVal;
}
