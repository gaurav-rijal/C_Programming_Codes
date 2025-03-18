// Example of: ARGUMENTS, NO RETURN TYPE.
// Wap to display the simple interest.

#include<stdio.h>
void SI(int p, int t, int r);

int main() {
    int p, t, r;
    printf("Enter the princple, Time & Rate:\n");
    scanf("%d %d %d", &p, &t, &r );
    SI(p, t, r);
     return 0;
}

void SI(int p, int t, int r) {
      int si;
      si = (p * t * r) / 100;
      printf("The simple interest is %d.", si);
}