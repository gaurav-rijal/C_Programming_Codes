// WAP TO FIND AREA &PERIMETER OF A REACTANGLE

#include<stdio.h>
int main()
{
    int l,b;

    printf("Enter length & breadth of reactangle:\n");
    scanf("%d%d",&l,&b);
    
    printf("\nThe Area is %d.\n",l*b);
    printf("The perimeter is %d.",(2*(l+b)));

return 0;    
}
