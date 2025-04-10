#include <stdio.h>
#include <math.h>

// Function to determine if a number is prime
int isPrime(int r) {
    if (r <= 1) {
        return 0; // Numbers less than or equal to 1 are not prime
    }
    for (int i = 2; i <= r-1; i++) { 
        if (r % i == 0) {
            return 0; 
        }
    }
    return 1; 
}