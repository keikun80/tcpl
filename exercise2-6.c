/* 
Write a function setbits(x, p, n,y) that returns x with the n bits that begin at position p set to the rightmost n bits of y, leaving  the other
bits unchanged.
*/
#include <stdio.h>  
unsigned setbits(unsigned , int , int, unsigned);
int main(int argc, char** argv)
{  
    int x = setbits(281, 4, 3, 30);  
    printf("%x\n", x);
    return 0;
} 
unsigned setbits(unsigned x, int p, int n , unsigned y)
{
    unsigned right_n_bits  = y & ~(~0 << n);
    unsigned mask = ~(~(~0 << n) << (p+1-n));
    unsigned cleared_x = x & mask;
    unsigned result = cleared_x | (right_n_bits << (p+1-n));
    return result;
}
