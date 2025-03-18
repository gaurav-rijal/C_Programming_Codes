/* WAP to display area of rectangle and parameter using switch case statement if we press 1 should 
display area and press 2 should display perimeter. */

#include <stdio.h>
int main()
{
    int c; 
    float l,b; 
    printf("Enter the length and breadth of the rectangle: \n"); 
    scanf("%f %f", &l, &b); 
    printf("Enter 1 to display the area or 2 to display the perimeter: \n"); 
    scanf("%d", &c); 
    switch(c)
    {
        case 1: 
            printf("The area of the rectangle is %.2f\n", (l*b)); 
            break; 
        case 2: 
            printf("The perimeter of the rectangle is %.2f\n", 2*(l+b));
            break; 
        default: 
            printf("Invalid choice\n"); 
            break; 
    }
    return 0; 
}
