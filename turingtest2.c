#include<stdio.h>

int main()
{
    int binary, digit=1, i;
    scanf("%d",&binary);
    int check = binary;
    while(check>1)
    {
        check = check/10;
        digit++;
    }
    int com[digit];
    for(i=digit-1;i>=0;i--)
    {
        com[i] = binary%10;
        binary = binary/10;
        if(com[i]==1) com[i]=0;
        else com[i]=1;
    }
    printf("1st complement : ");
    for(i=0;i<digit;i++)
    {
        printf("%d",com[i]);
    }
    printf("\n");
    if(check==0)
    {
        digit=digit+1;
        int newcom[2];
        newcom[1]=com[0];
        newcom[1]+=1;
        newcom[0]=0;
        if(newcom[1]==2)
        {
            newcom[1]-=2;
            newcom[0]+=1;
        }
        printf("2nd complement : ");
        for(i=0;i<digit;i++)
        {
            printf("%d",newcom[i]);
        }
    }
    else{
        com[digit-1]+=1;
        for(i=1;i<digit;i++)
        {
            if(com[digit-i]==2)
            {
                com[digit-i]-=2;
                com[digit-i-1]+=1;
            }
        }
        printf("2nd complement : ");
        for(i=0;i<digit;i++)
        {
            printf("%d",com[i]);
        }
    }
    return 0;
}