#include<stdio.h>
#include<string.h>
#include "ref.h"

int main()
{
    while(1)
    {
        int choice;
        printf("Select a choice: \n 1) Addition \n 2) Multiplication \n 3) Exit \n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if(choice==1)
        {
            char U1[500],U2[500];
            printf("Enter two unary numbers: ");
            scanf("%s %s", U1,U2);
            if(validunary(U1)==1 && validunary(U2)==1)
            {
                strcat(U1,U2);
                printf("Answer: %s\n",U1);
            }
        }
        else if(choice==2)
        {
            char U1[500],U2[500];
            printf("Enter two unary numbers: ");
            scanf("%s %s", U1,U2);
            if(validunary(U1)==1 && validunary(U2)==1)
            {
                printf("Answer: ");
                for(int i=0;i<strlen(U2);i++)
                {
                    printf("%s",U1);
                }
                printf("\n");
            }
        }
        else
        {
            printf("Terminating");
            break;
        }
    }
    return 0;
}
