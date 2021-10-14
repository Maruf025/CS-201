#include<stdio.h>
#include<string.h>
#include "ref.h"

int main()
{
    while(1)
    {
        int choice;
        printf("Select a choice: \n 1) Addition \n 2) Multiplication \n 3) Exit \n");
        printf("Enter a choice: ");
        scanf("%d",&choice);
        if(choice==1)
        {
            char RN1[1000],RN2[1000];
            printf("Enter two roman numbers: ");
            scanf("%s %s", RN1,RN2);
            long int DN1=romantodeci(RN1);
            long int DN2=romantodeci(RN2);
            if(DN1==-1 || DN2==-1)
            {
                break;
            }
            else
            {
                long int sum=DN1+DN2;
                printf("Answer: ");
                decitoroman(sum);
                printf("\n");
            }
        }
        else if(choice==2)
        {
            char RN1[1000],RN2[1000];
            printf("Enter two roman numbers: ");
            scanf("%s %s",RN1,RN2);
            long int DN1=romantodeci(RN1);
            long int DN2=romantodeci(RN2);
            if(DN1==-1 || DN2==-1)
            {
                break;
            }
            else
            {
                long int multiply=DN1*DN2;
                printf("Answer: ");
                decitoroman(multiply);
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
