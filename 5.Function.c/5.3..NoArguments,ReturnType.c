// Example of: NO ARGUMENTS, RETURN TYPE.
// Wap to display the simple interest.

#include<stdio.h>
int SI();

int main() {
    printf("The simple interest is %d.", SI());
     return 0;
}

int SI() {
      int p,t,r,si;
      printf("Enter the princple, Time & Rate:\n");
      scanf("%d %d %d", &p, &t, &r );
      si = (p * t * r) / 100;
      return SI;
}