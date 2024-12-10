/* 
Write a function invert(x,p,n) that return x with the n bits
that begin at position p inverted (i.e, 1 changed into 9 and vice versa), 
leaving the other bits unchanged. 
*/

#include <stdio.h>

unsigned inverted(unsigned, int, int);
int main(int argc, char** argv)
{ 
    int x = 0b01101101;
    int p = 4;
    int n = 3; 
    unsigned result = inverted(x, p, n); 
    printf("%x", result);
    return 0;
} 
unsigned inverted(unsigned x, int p, int n)
{ 
   unsigned mask = (~(~0 << n)) << (p+1-n); 
   return x ^ mask;
}