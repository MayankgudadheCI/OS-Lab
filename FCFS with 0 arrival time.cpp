//Mayank gudadhe CI-35
#include<iostream>
using namespace std;
int main()
{
    int n,BT[5],WT[5],TAT[5],Avgwt=0,Avgtat=0,i,j;
    cout<<"Enter number of processes:-";
    cin>>n;
    cout<<"\nEnter Burst(Execution) Time\n";
    for(i=0;i<n;i++)
    {
        cout<<"P["<<i+1<<"]:";
        cin>>BT[i];
    }
 
    WT[0]=0;    
 
    for(i=1;i<n;i++)
    {
        WT[i]=0;
        for(j=0;j<i;j++)
            WT[i]+=BT[j];
    }
    cout<<"\nProcess\t\tBurst Time\tWaiting Time\tTurnaround Time";
    for(i=0;i<n;i++)
    {
        TAT[i]=BT[i]+WT[i];
        Avgwt+=WT[i];
        Avgtat+=TAT[i];
        cout<<"\nP["<<i+1<<"]"<<"\t\t"<<BT[i]<<"\t\t"<<WT[i]<<"\t\t"<<TAT[i];
    }
 
    Avgwt/=i;
    Avgtat/=i;
    cout<<"\n\nAverage WT:"<<Avgwt;
    cout<<"\nAverage TAT:"<<Avgtat;
 
    return 0;
}
