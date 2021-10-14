#include<stdio.h>

int main()
{
    char input[999];
    printf("Enter the value\n");
    scanf("%s",input);
    
    int n;
    n=0;
    
    int c1=0,c2=0;
    
    while(input[n]!='\0')
    {
        if(input[n]=='.')
        {
            c1++;
            if(input[n+1]!='\0')
            c2=1;
        }
        n++;
    }
    
    
    if(c1==1 && c2==1){
        printf("Valid\n");
    }
    
    else{
        printf("Invalid\n");
    }
    
    
    return 0;
}
