#include<stdio.h>

void hello();                                              // Declaration/prototype
void bye();
int sum(int a, int b);
int product(int a, int b);

int main() {
    int a,b;
    hello();                                               // Function call
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);
    sum(a,b);
    printf("The product is %d.\n\n",product(a, b));
    bye();
  return 0;
}

void hello() {                                             // Function definition
    printf("Hello!\n\n");
}

void bye() {
    printf("Goodbye:)\n");
}


int sum(int a, int b) {
    return a + b;
}
int product(int a, int b) {
    return a * b;
}