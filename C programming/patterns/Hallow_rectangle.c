#include<stdio.h>
int main()
{
    int i,j,rows;
    printf("Enter the no .of rows ");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        
        for(j=1;j<=rows+2;j++)
        {
            if(i==1 || i==rows || j==1 ||j==rows+2)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    
}