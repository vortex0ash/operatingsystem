	
#include<stdio.h>
 
int main()
{
    int n, cpuUsage[20],i,j,pit[20];
    printf("Enter total number of processes:");
    scanf("%d", &n);
 
    printf("\nEnter new Cpu Usage\n");
    for(i=0;i<n;i++)
    {
        printf("p[%d]:",i+1);
        scanf("%d", &cpuUsage[i]);
    }
    pit[0]=0;
    //calculating new priorities;
    for(i=0;i<n;i++)
    {
            pit[i]=((cpuUsage[i] / 2)+ 60);
            
            
    }
 
    printf("\nProcess\t\t\t\tNewPriority");
    for(i=0;i<n;i++){
    printf("\np[%d]\t\t\t\t%d\n",i+1,pit[i]);
 }
    return 0;
}
