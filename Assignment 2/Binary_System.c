#include<stdio.h>
#include "ref.h"

int main()
{
    while(1)
    {
        int choice;
        printf("Select a choice: \n 1) Addition \n 2) Multiplication \n 3) Exit \n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        if(choice==1)
        {
            long n1,n2;
            printf("Enter two binary numbers: ");
            scanf("%ld %ld",&n1,&n2);
            int i=0,rem=0,sum[20];
            while(n1!=0 || n2!=0)
            {
                sum[i++]=(n1%10 + n2%10 + rem)%2;
                rem=(n1%10 + n2%10 + rem)/2;
                n1=n1/10;
                n2=n2/10;
            }
            if(rem!=0)
            {
                sum[i++]=rem;
                i--;
                printf("Sum is: ");
                while(i>=0)
                { 
                    printf("%d\n",sum[i--]);
                }
            }
        }
        else if(choice==2)
        {
            long n1,n2,product=0;
            printf("Enter two binary numbers: ");
            scanf("%ld %ld",&n1,&n2);
            int num,factor=1;
            while(n2!=0)
            {
                num=n2%10;
                if(num==1)
                {
                    n1=n1*factor;
                    product=binaryproduct(n1,product);
                }
                else
                {
                    n1=n1*factor;
                    n2=n2/10;
                    factor=10;
                }
            }
            printf("Product is: %ld\n",product);
        }
        else
        {
            printf("Terminating");
            break;
        }
    }
    return 0;
}

