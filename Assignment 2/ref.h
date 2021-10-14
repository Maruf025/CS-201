#include<stdio.h>
#include<string.h>

typedef long int num;
int dig(char chr)
{
    int value=0;
    switch (chr)
    {
    case 'I':
        value=1;
        break;
    case 'V':
        value=5;
        break;
    case 'X':
        value=10;
        break;
    case 'L':
        value=50;
        break;
    case 'C':
        value=100;
        break;
    case 'D':
        value=500;
        break;
    case 'M':
        value=1000;
        break;
    case '\0':
        value=0;
        break;
    default:
        value=-1;
    }
    return value;
}
num romantodeci(char roman[])
{
    int i=0;
    num num=0;
    while(roman[i])
    {
        if(dig(roman[i])<0)
        {
            printf("Invalid roman literal");
            return -1;
        }
        if((strlen(roman)-1)>2)
        {
            if(dig(roman[i])<dig(roman[i+2]))
            {
                printf("Invalid roman literal");
                return -1;
            }
        }
        if(dig(roman[i])>=dig(roman[i+1]))
        {
            num+=dig(roman[i]);
        }
        else
        {
            num+=dig(roman[i+1])-dig(roman[i]);
            i++;
        }
        i++;
    }
    return num;
}
int decitoroman(num num)
{
    if(num<=0)
    {
        return -1;
    }
    while(num!=0)
    {
        if(num>=1000)
        {
            printf("M");
            num-=1000;
        }
        else if(num>=900)
        {
            printf("CM");
            num-=900;
        }
        else if(num>=500)
        {
            printf("D");
            num-=500;
        }
        else if(num>=400)
        {
            printf("CD");
            num-=400;
        }
        else if(num>=100)
        {
            printf("C");
            num-=100;
        }
        else if(num>=90)
        {
            printf("XC");
            num-=90;
        }
        else if(num>=50)
        {
            printf("L");
            num-=50;
        }
        else if(num>=40)
        {
            printf("XL");
            num-=40;
        }
        else if(num>=10)
        {
            printf("X");
            num-=10;
        }
        else if(num>=9)
        {
            printf("IX");
            num-=9;
        }
        else if(num>=5)
        {
            printf("V");
            num-=5;
        }
        else if(num>=4)
        {
            printf("IV");
            num-=4;
        }
        else if(num>=1)
        {
            printf("I");
            num-=1;
        }
    }
    return 1;
}
int validunary(char unary[])
{
    int i=0;
    while(unary[i])
    {
        if(unary[i]!='1')
        {
            return -1;
        }
        i++;
    }
    return 1;
}
num binaryproduct(num binary1,num binary2)
{
    int i=0,reminder=0,sum[20];
    num binaryprod=0;
    while(binary1!=0 || binary2!=0)
    {
        sum[i++]=(binary1%10 + binary2%10 + reminder)%2;
        reminder=(binary1%10 + binary2%10 + reminder)/2;
        binary1=binary1/10;
        binary2=binary2/10;
    }
    if(reminder!=0)
    {
        sum[i++]=reminder;
        i--;
    }
    while(i>=0)
    {
        binaryprod=binaryprod*10 + sum[i--];
    }
    return binaryprod;
}
