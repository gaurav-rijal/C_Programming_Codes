// WAP TO CONVERT THE GIVEN TEMPr. IN CELSIUS TO FAHRENHEIT [F=C*(9/5)+32].

#include<stdio.h>
int main()
{
    float C,F;
    printf("Enter Tempreture in Celsius: \n");
    scanf("%f",&C);

    F=C*(9/5)+32;
    printf("\nThe tempreture in Fahernheit is %f",F);
    
 return 0;   
}