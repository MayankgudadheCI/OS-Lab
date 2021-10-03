#include<iostream>
using namespace std;
int main()
{
	int blocks,process,blocksize[blocks],processize[process],allocation[process];
	cout<<"Enter number of process :";
	cin>>process;
	cout<<"Enter process size "<<endl;
	for(int i=0;i<process;i++)
	{allocation[i]=-1;
	cout<<"Enter size of process "<<i<<" : ";
	cin>>processize[i];
	}
	
	cout<<endl<<"Enter number of blocks :";
	cin>>blocks;
	cout<<"Enter block size "<<endl;
	for(int i=0;i<blocks;i++)
	{cout<<"Enter size of blocks "<<i<<" : ";
	cin>>blocksize[i];
	}
	
	for(int i=0;i<process;i++)
	{for(int j=0;j<blocks;j++)
		{
			if(blocksize[j]>=processize[i])
			{
				blocksize[j]=blocksize[j]-processize[i];
				allocation[i]=j;
				break;
			}
		}	
	}
	cout<<endl;
	for(int i=0;i<process;i++)
	{
		if(allocation[i]!=-1)
		{cout<<"Process "<<i<<" is stored at "<<allocation[i]<<" block"<<endl;
		}
		else
		{cout<<"Process "<<i<<" is not allocated "<<endl;
		}
	}
		
}
