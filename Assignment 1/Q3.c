#include<stdio.h>

int main()
{
    int row,column;
    
    //Initialising 2-D array.
    printf("Enter the number of rows in 2D matrix: \n");
    scanf("%d",&row);
    printf("Enter the number of column in 2D matrix: \n");
    scanf("%d",&column);
    
    int a[row][column];
    
    //User input.
    printf("\nEnter the elements 2D array: \n");
    
    for(int i=0;i<row;i++)
        {
            for(int j=0;j<column;j++)
                scanf("%d",&a[i][j]);
        }
    
    int n=row*column;
    int arr[n];
    
    int m=0; // to be used for 1-D Array.
    
    //Printing 2-D Array.
    printf("\n2D Array:\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
            printf("%d ",a[i][j]);
            printf("\n");
    }
    
    //Putting values in 1-D Array.
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            arr[m]=a[i][j];
            m++;
        }
    }
    
    //Printing 1-D array.
    printf("\n1D array after conversion:\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    
    return 0;
}

