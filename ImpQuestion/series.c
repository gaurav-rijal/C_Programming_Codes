/* Write a program to display the following series up to 25 terms but do not print the 7 ^(th) term.
2 * 3, 3 * 5, 4 * 7, 5*9, ... */

#include<stdio.h>
int main () {
    int i;
    for (i=1; i<25; i++) {
        if (i==7) {
            continue;
        }
        printf("%d * %d, ", (i+1), (i*2)+1);
    }
    return 0;
}
