// Example of: NO ARGUMENTS, NO RETURN TYPE.
// Wap to display the simple interest.

#include<stdio.h>
void SI();

int main() {
     SI();
     return 0;
}

void SI() {
      int p,t,r,si;
      printf("Enter the princple, Time & Rate:\n");
      scanf("%d %d %d", &p, &t, &r );
      si = (p * t * r) / 100;
      printf("The simple interest is %.2d.", si);
}