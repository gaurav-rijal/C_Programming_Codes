// WAP TO DISPLAY SIMPLE INTEREST USING DEFINE FUNCTION AND CALL THE FUNCTION BY REFERENCE.
#include<stdio.h>
void SI(int *p, int *t ,int *r);
int main ()
{
    int p,t,r;
    printf("Enter princpal, time, rate: \n");
    scanf("%d %d %d",&p, &t, &r);
    SI (&p, &t, &r);
    return 0;
}
void SI(int *p, int *t, int *r)
{
    int si;
    si = ((*p) * (*t) * (*r))/100;
    printf("The simple interest is %d.",si);
}
