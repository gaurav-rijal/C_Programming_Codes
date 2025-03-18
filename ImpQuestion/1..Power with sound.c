// WAP TO DISPLAY THE POWER OF NUMBER.
 #include<windows.h>
 #include<stdio.h>
 #include<math.h>
 int main()
{
    int n,m,p;
    Beep(500,900);
    printf("Enter number and its power \n \a");
    scanf("%d %d",&n,&m);
    
    p=pow(n,m);
    printf("%d's power %d is %d",n,m,p);
    
    return 0;
}