// Input Functions
#include<stdio.h>
int main(){
int num;
printf("Enter a number: ");
scanf("%d", &num);          // using scanf
printf("You entered: %d\n", num);

printf("Enter a character: "); 
char c = getchar();         // using getchar
printf("You entered: %c\n", c);

char name[50];
printf("Enter your name: ");
fgets(name, sizeof(name), stdin);  // using fgets()
printf("Hello, %s", name);

    return 0;
}