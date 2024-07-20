#include <stdio.h>
#include <stdlib.h> // Required for malloc

// Function returning pointer
int *fun()
{
    int *A = (int *)malloc(sizeof(int)); // Allocate memory dynamically
    *A = 10;                             // Assign value
    return A;                            // Return pointer to allocated memory
}

// Driver Code
int main()
{
    // Declare a pointer
    int *p;
    // Function call
    p = fun();
    printf("%p\n", p);  // Print address
    printf("%d\n", *p); // Dereference pointer to print value
    free(p);            // Free allocated memory
    return 0;
}