// 
#include<stdio.h>
# define PI 3.1415
void ar(int *r);
int main()
{
    int r;
    printf("Enter the radius of cricle:");
    scanf("%d",&r);
    ar(&r);
return 0;
}
void ar(int *r)
{
    int ar;
    ar = PI * (*r) * (*r) ;
    printf("The area of cricle is %d.",ar);
}

