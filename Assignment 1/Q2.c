#include<stdio.h>

int main()
{
    char input[999];
    scanf("%s",input);
    
    int n=0;
    int num=0;
    int tick=0;
    int id1=-1,id2=-1;
    
    while(input[n]!='\0')
    {
        if((input[n]>='A' && input[n]<='Z') || (input[n]>='a' && input[n]<='z') || (input[n]>='0' && input[n]<='9'))
            num=1;
        else if((input[n]=='.' || input[n]=='-'  || input[n]=='_' || input[n]=='@') && (n!=0 && input[n+1]!='\0'))
            num=1;
        else
        {
            num=-1;
            break;
        }
        if(input[n]=='@')
        {
            tick++;
            id1=n;
        }
        if(tick>1)
        {
            num=-1;
            break;
        }
        if(input[n]=='.')
        {
            id2=n;
        }
        n++;
    }
    if(id2-id1<2)
        num=-1;
    if(num==1)
        printf("This is a VALID email address\n");
    else
        printf("This is NOT a valid email address\n");
  return 0;
}

