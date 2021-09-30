#include <stdio.h>

void add(char n1[], char n2[], char res[]);

void getval(char n1[], char n2[]);

int main()
{
    char n_1[5000];
    char n_2[5000];
    char res[5000];

      for (int i=0;i<5000;i++)
      {
        n_1[i]= '0';
        n_2[i]= '0';
        res[i]= '0';
      }
      
      n_2[5000 - 1]='1';
    
      int n; //the number of term you want in the series
      scanf("%d", &n);
    
      // For first three terms.
      
      if(n==0)
      {
        printf("%c", '0');
      }
      
      else if(n==1 || n==2)
      {
        printf("%c", '1');
      }
      
      //for the rest of series.
      
      else
      {
        for(int i=2;i<=n;i++)
        {
          add(n_1, n_2, res);
          getval(n_1, n_2);
          getval(n_2, res);
        }
    
        // To print the answer.
        
        int begin=0;
        for (int i=0;i<5000;i++)
        {
          if (begin==0 && res[i]=='0')
            continue;
    
          if (begin==0 && res[i]!='0')
            begin=1;
          printf("%c", res[i]);
        }
        printf("\n");
      }
      return 0;
    }
    
    
void add(char n1[], char n2[], char res[]){
  int carry = 0;
  for (int i = 5000 - 1; i >= 0; i--)
  {
    int num = (n1[i]-'0')+(n2[i]-'0')+carry;
    res[i] = (num % 10) + '0';
    carry=num/10;
  }
}
    
void getval(char n1[], char n2[])
{
  for (int i = 5000 - 1; i >= 0; i--)
    n1[i] = n2[i];
}
