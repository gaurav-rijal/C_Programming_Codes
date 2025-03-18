/* WAP TO CREAT STRUCTURE TO STORE RECORDS OF 10 EMPLOYEE WITH FIELD eID, eNAME, eADDRESS AND eSALARY
AND DISPLAY ONLY RECORDS WHOSE SALARY IS GREATER THAN 20.000.*/
#include<stdio.h>
struct employee
{
    int id;
    char name[20];
    char address[20];
    float salary;
} e[3];
int main()
{
    int i;
    for (i=0; i<3; i++)
    {
        printf("Enter the data of employee %d:-\n", i+1);
        printf("I.D.: ");
        scanf("%d", &e[i].id);

        printf("\nName: ");
        scanf("%s", e[i].name);

        printf("\nAddress: ");
        scanf("%s", e[i].address);

        printf("\nSalary: ");
        scanf("%.2f", &e[i].salary);
    }
    for (i=0; i<3; i++)
    {
        if (e[3].salary > 20000)   
        {
            printf("I.D.: %d\n", e[i].id);
            printf("Name: %s\n", &e[i].name);
            printf("Address: %s\n", e[i].address);
            printf("Salary: %.2f\n\n", e[i].salary);
        } 
    }
}