#include<stdio.h>

int main()
{
    int num, cube=0, i;
    scanf("%d",&num);
    int check=num;
    int count=0;
    for(i=2;i<num/2;i++)
    {
        if(check%i==0)
        {
            check = check/i;
            count++;
            i--;
        }
        if(count==3 && check==1) 
        {
            cube=1;
        }
        else if(check==1)
        {
            count=0;
            check=num;
            i++;
        }
    }
    if(cube==0) printf("false\n");
    else if(cube==1) printf("true\n");
    return 0;
}