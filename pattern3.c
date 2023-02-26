#include<stdio.h>
void name(int num)
{
    int i,j,A,k=1;
    
    for(i=1;i<=num;i++)
    {
        for(j=1;j<num;j++)
        {
            if(i==1||j==1||i==(num/2)||j==num-1 && i<=(num/2)||i+j==k&&i>=num/2)
            {
                printf(" R");
            }
            else{
                printf("  ");

            }
    
        }
        printf("\n");
        k=k+2;
    }
   
    printf("\n");
    for(i=1;i<=num;i++)
    {
        if(A==i)    
        {
        A++;
        }
        for(j=1;j<num;j++)
        {
            if(i==1||j==1||i==(num/2)+1||j==num-1 && i<=num)
            {
                printf(" A");
            }
            else{
                printf("  ");

            }
    
        }
        printf("\n");
    }
    printf("\n");
    for(i=1;i<=num;i++)
    {
        if(A==i)    
        {
        A++;
        }
        for(j=1;j<num;j++)
        {
            if(j==1||i==(num/2)+1||j==num-1 && i<=num)
            {
                printf(" H");
            }
            else{
                printf("  ");

            }
    
        }
        printf("\n");
    }
    printf("\n");
    for(i=1;i<=num;i++)
    {
        if(A==i)    
        {
        A++;
        }
        for(j=1;j<num;j++)
        {
            if(j==1||i==num||j==num-1 && i<=num)
            {
                printf(" U");
            }
            else{
                printf("  ");

            }
    
        }
        printf("\n");
    }
    printf("\n");
    for(i=1;i<=num;i++)
    {
        if(A==i)    
        {
        A++;
        }
        for(j=1;j<num;j++)
        {
            if(j==1||i==num||j==num-1&&i==num-1)
            {
                printf(" L");
            }
            else{
                printf("  ");

            }
    
        }
        printf("\n");
    }

     printf("\n");
    for(i=1;i<=num;i++)
    {
        if(A==i)
        {
        A++;
        }
        for(j=1;j<num;j++)
        {
            if(i==1||j==1||i==(num/2)||j==num-1 && i<=(num/2))
            {
                printf(" P");
            }
            else{
                printf("  ");

            }
    
        }
        printf("\n");
    }
    printf("\n");
    for(i=1;i<=num;i++)
    {
        if(A==i)    
        {
        A++;
        }
        for(j=1;j<num;j++)
        {
            if(i==1||j==1||i==(num/2)+1||j==num-1 && i<=num)
            {
                printf(" A");
            }
            else{
                printf("  ");

            }
    
        }
        printf("\n");
    }
    printf("\n");
    for(i=1;i<=num;i++)
    {
        for(j=1;j<num;j++)
        {
            if(j==1||i==j||j==num-1 && i<=num)
            {
                printf(" N");
            }
            else{
                printf("  ");

            }
    
        }
        printf("\n");
    }
    printf("\n");
    for(i=1;i<=num;i++)
    { 
        for(j=1;j<num;j++)
        {
            
            if(j==1||i==1 && j<=num-2||i==num && j<=num-2||j==num-1&&i>=2&&i<=num-1)
            {
                printf(" D");
            }
            else{
                printf("  ");

            }
      
        }
        printf("\n");
    }
    printf("\n");
    for(i=1;i<=num;i++)
    {
        for(j=1;j<num;j++)
        {
            if(j==1||i==1||i==num||i==num/2+1)
            {
                printf(" E");
            }
            else{
                printf("  ");

            }
        }
        printf("\n");
}
  printf("\n");
    for(i=1;i<=num;i++)
    {
        for(j=1;j<num;j++)
        {
            if(i==j&&i<=num/2||i+j==num&&i<=num/2||j==num/2&&i>=num/2)
            {
                printf(" Y");
            }
            else{
                printf("  ");

            }
    
        }
        printf("\n");
    }
    
}
void main()
{
    int num;
    printf("enter a number:-");
    scanf("%d",&num);
    name(num);
}