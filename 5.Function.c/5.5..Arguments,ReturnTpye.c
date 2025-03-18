// Example of: NO ARGUMENTS, RETURN TYPE.
// Wap to display the simple interest.

#include<stdio.h>
int SI(int, int, int);

int main() {
    int p,t,r;
    printf("Enter the princple, Time & Rate:\n");
    scanf("%d %d %d", &p, &t, &r );
    printf("The simple interest is %d.", SI(p, t, r));
    return 0;
}

int SI(int, int, int) {
      int p, t, r, si;
      si = (p * t * r) / 100;
      return si;
}