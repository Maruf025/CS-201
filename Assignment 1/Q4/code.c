  #include<stdio.h>
  #include<time.h>
  #include<stdlib.h>
	
	void selection_sort(long long int m[],long long int n)
	{
	    for(int i=0;i<n-1;i++)
	    {
	        for(int j=i+1;j<n;j++)
	        {
	            if(m[j]<m[i])
	            {
	                int tmp=m[j];
	                m[j]=m[i];
	                m[i]=tmp;
	            }
	        }
	    }
	    
	    printf("\nArray after Selection Sort:\n");
	    for(int i=0;i<n;i++)
	        printf("%d ",m[i]);
	    printf("\n");
	    return;
	}
	
	void bubble_sort(long long int m[],long long int n)
	{
	    int tick=1;
	    while(tick<n)
	    {
	        for(int i=0;i<n-tick;i++)
	        {
	            if(m[i]>m[i+1])
	            {
	                int tmp=m[i];
	                m[i]=m[i+1];
	                m[i+1]=tmp;
	            }
	        }
	        tick++;
	    }
	    
	    printf("\nArray after Bubble Sort:\n");
	    for(int i=0;i<n;i++)
	        printf("%d ",m[i]);
	    printf("\n");
	    return;
	}
	
	
	int main()
	{
	    printf("Enter the size of Array:\n");
	    
	    long long int n;
	    scanf("%d",&n);
	    
	    long long int m[n];
	    
	    for(int i=0;i<n;i++)
	        m[i]=i;
	        
	    clock_t start,end;
	    long int t;
	    start=clock();
	    selection_sort(m,n);
	    end=clock();
	    t=end-start;
	    printf("\nTime elapsed for selection sort: %f\n",(double)t/(double)CLOCKS_PER_SEC);
	    clock_t start2,end2;
	    long int t2;
	    start2=clock();
	    bubble_sort(m,n);
	    end2=clock();
	    t2=end2-start2;
	     printf("\nTime elapsed for bubble sort: %f\n",(double)t2/(double)CLOCKS_PER_SEC);
	     
	     return 0;
	}


