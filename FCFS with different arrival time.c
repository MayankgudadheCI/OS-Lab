#include<stdio.h>
#include<conio.h>
#define max 30
void main()
{
    int i,j,n,bt[max],at[max],wt[max],tat[max],temp[max];
    float awt =0 ,atat = 0;
    printf ("Enter total number of processes:-");
    scanf ("%d",&n);
    printf("Enter the burst time of process:-");
    for(i=0;i<n;i++)
    scanf("%d",&bt[i]);
    printf("Enter the arrival time of process:-");
    for(i=0;i<n;i++)
    scanf("%d",&at[i]);
    temp[0]=0;
    printf("processes\t Burst Time \t Arrival time\t waiting time\t Turn around time\n");
    for(i=0;i<n;i++)
    {
        wt[i]=0;
        tat[i]=0;
        temp[i+1]=temp[i]+bt[i];
        wt[i]=temp[i]-at[i];
        tat[i]=wt[i]+bt[i];
        awt=awt+wt[i];
        atat = atat+tat[i];
        printf("%d\t\t%d\t\t%d\t\t%d\t\t%d\n",i+1,bt[i],at[i],wt[i],tat[i]);
    }
    awt=awt/n;
    atat=atat/n;
    printf("Average WT is:-%f\n",awt);
    printf("Average TAT is:-%f",atat);
    getch();
}
    