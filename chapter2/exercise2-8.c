/*  
Write a function rightrot(x, n) that returns the value of the integer 
x rotated to the right by n bit position 
*/ 

#include <stdio.h>

unsigned rightrot(unsigned x, int n);
int main (int argc, char** argv)
{ 
    int x = 0b00001111;
    int n = 3; 
    printf("%x\n" , rightrot(x,n));
    return 0;
} 
unsigned rightrot(unsigned x, int n) 
{
    int num_of_bits = sizeof(x) * 8; 
    //printf("%d\n", num_of_bits);
    n = n % num_of_bits;
    return (x >> n) | (x << (num_of_bits-n));
}