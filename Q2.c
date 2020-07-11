#include<stdio.h>

int main()
{
    printf("Enter a line to convert to an integer\n");
    char ch[50];
    scanf("%s", ch);
    int num;
    num = atoi(ch);//convert from ch to int
    printf("You entered: %d", num);
    return 0;
}