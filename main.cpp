#include "mbed.h"
#include <cstdio>

// a second commit
int t1 = 0;
int t2 = 1;
int next_term = t1 + t2;
int max_terms = 8;

// main() runs in its own thread in the OS
int main() 
{
    // this is the main function
    printf("Hello, Lab program 1 \r\n ");
    printf("fibonacchi sequence: %d, %d, ", t1, t2);
    
    // this is the for loop
    for(int i=3; i<=max_terms; i++){
        printf("%d, ", next_term);
        t1 = t2;
        t2 = next_term;
        next_term = t1 + t2;

        printf("\r\n");
    }

    while (true){

    }

}