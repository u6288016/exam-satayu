#include<stdio.h>

int changebase(int,int);

int main()
{
    int binary, digit=1, i;
    scanf("%d",&binary);
    int checkdigit = binary;
    while(checkdigit>1)
    {
        checkdigit = checkdigit/10;
        digit++;  
        
    }
    int bi[digit];
    int j=0, k=0, sum=0, d;
    if(digit%3==0) d=digit/3;
    else d=digit/3+1;
    int base[d];
    for(i=0;i<digit;i++)
    {
        bi[i] = binary%10;
        binary = binary/10;
        sum = sum + bi[i]*changebase(2,k);
        k++;
        if(k==3 || i==digit-1) 
        { 
            base[j] = sum;
            sum=0;
            k=0;
            j++;
        }
    }
    for(i=j-1;i>=0;i--)
    {
        printf("%d",base[i]);
    }
    printf("\n");
    return 0;
}

int changebase(int mul, int n)
{
    if(n==0)
    {
        return 1;
    }
    mul = mul*changebase(mul,n-1);
    return mul;
}