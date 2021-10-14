#include<stdio.h>

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
            long int n1,n2;
            printf("Enter two decimal numbers: ");
            scanf("%ld %ld", &n1,&n2);
            long long int sum=n1+n2;
            printf("Answer: %ld \n",sum);
        }
        else if(choice==2)
        {
            long int n1,n2;
            printf("Enter two decimal numbers: ");
            scanf("%ld %ld",&n1,&n1);
            long long int multiply=n1*n2;
            printf("Answer: %ld \n",multiply);
        }
        else
        {
            printf("Terminating");
            break;
        }
    }
    return 0;
}
