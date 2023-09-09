#include<stdio.h>
void FCFS_algorithm()
{
    int n,i,sum=0;
    printf("enter a how many process\n");
    scanf("%d",&n);
    int ar[n],bs[n],ct[n],tat[n],wt[n];
    for(i=0;i<n;i++)
    {
      printf("enter a arrival time process %d:-",i+1);
      scanf("%d",&ar[i]);
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
      printf("enter a Burst time process P%d:-",i+1);
      scanf("%d",&bs[i]);
    }
     printf("\n");
     printf("\t\tFirst Come First Serve ALGORITHM:-\n\n");
     printf("Process     arrival time   Bust time         Complete time           TAT        WT\n");
    for(i=0;i<n;i++)
    {
        sum=sum+bs[i];
        tat[i]=sum-ar[i];
        wt[i]=tat[i]-bs[i];
     printf("P%d          %d               %d                %d                     %d         %d\n",i+1,ar[i],bs[i],sum,tat[i],wt[i]);
     
    }
    printf("\n");
    float sum_tat=0,sum_wt=0;
    for(i=0;i<n;i++)
    {
      sum_tat=sum_tat+tat[i];
      sum_wt=sum_wt+wt[i];
      
    }
    sum_tat=(float)(sum_tat/n);
    sum_wt=(float)(sum_wt/n);
    printf("Average TAT=%3.2f\nAverage WT=%3.2f",sum_tat,sum_wt);
}
void SJF_algorithm()
{
    int n,i,sum=0;
    printf("enter a how many process\n");
    scanf("%d",&n);
    int ar[n],bs[n],ct[n],tat[n],wt[n];
    for(i=0;i<n;i++)
    {
      printf("enter a arrival time process %d:-",i+1);
      scanf("%d",&ar[i]);
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
      printf("enter a Burst time process P%d:-",i+1);
      scanf("%d",&bs[i]);
    }
    for(i=0;i<n;i++)
    {
      if(bs[0]>bs[i])
      {
    sum=sum+bs[i];
    printf("\n%d",bs[i]);
      }
    }
     printf("\n");
     printf("\t\tShortest Job First ALGORITHM:-\n\n");
     printf("Process     arrival time   Bust time         Complete time           TAT        WT\n");
}
void main()
{
 FCFS_algorithm();
// SJF_algorithm();
}