#include <stdio.h>

int main() {

    int i, n, even[101];
    // Here, we have to set the number of items in array even[] depending on n

    for ( i = 0; i < 101; i++ ) {
        even[i] = 0;
    }

    for ( i = 0; i < 101; i += 2 ) {
        even[i] = 1;
    }

    scanf("%d", &n);

    if ( even[n] ) {
        printf("%d is even number.\n", n);
    } else {
        printf("%d is odd number.\n", n);
    }

    return 0;
}

// Space Complexity is O(n)

// Time Complexity is O(n) - Order of n
