/* write program to determine the range of char , short , int and long variables, both singed and unsigned
/* by printing appropriate values from standard headers and by direct computation. 
*/

#include <stdio.h>
#include <limits.h> 

int main(int argc, char** argv)
{  
  printf("char range : %d , %d\n", SCHAR_MIN, SCHAR_MAX); 
  printf("unsigned char range: %d\n", UCHAR_MAX);
  printf("int range : %d , %d\n", INT_MIN, INT_MAX); 
  printf("unsigned integer : %d\n", UINT_MAX);
  printf("float range : %llu , %llu\n", LONG_MIN, LONG_MAX);   
  printf("unsigned float : %ullu\n", ULONG_MAX) ;
  printf("double range : %llu , %llu\n", LLONG_MIN, LLONG_MAX);
  printf("unsigned double : %llu\n", ULLONG_MAX) ;

  return 0;
}
