#include<stdio.h>

int main()
{
    int num, digit=1, i;
    scanf("%d",&num);
    int checkdigit=num;
    while(checkdigit>1)
    {
        checkdigit = checkdigit/2;
        digit++;
    }
    int binary[digit];
    for(i=digit-1;i>=0;i--)
    {
        binary[i] = num%2;
        num = num/2;
    }
    for(i=0;i<digit;i++)
    {
        printf("%d",binary[i]);
    }
    printf("\n");
    return 0;
}