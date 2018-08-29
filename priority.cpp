#include<iostream>
using namespace std;
int main()
{  int n; cout<<"enter no of process";
   cin>>n;
	int at=0,bt[n],pt[n],wt[n],tat[n],ct[n]; float tt=0,wtt=0;
	
	cout<<"enter burst time";
	for(int i=0;i<n;i++)
	{
		cin>>bt[i];
	}
	cout<<"enter priority";
	for(int i=0;i<n;i++)
	{
		cin>>pt[i];
	}
    for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(pt[j]>pt[j+1])
			{
				int temp=bt[j];
				bt[j]=bt[j+1];
				bt[j+1]=temp;
				
				int tempp=pt[j];
				pt[j]=pt[j+1];
				pt[j+1]=tempp;
				
				
				
				
			}
		}
	}	
	for(int i=0;i<n;i++)
	{
		ct[i]=ct[i-1]+bt[i];
	}
	for(int i=0;i<n;i++)
	{
		tat[i]=ct[i]-at;
	}
	for(int i=0;i<n;i++)
	{
		wt[i]=tat[i]-bt[i];
	}
	cout<<"arrival time\t burst time\t priority\t completion time\t turnaround time\twaiting time\t";
	for(int i=0;i<n;i++)
	{
		cout<<"\n"<<at<<"\t\t\t"<<bt[i]<<"\t\t"<<pt[i]<<"\t\t"<<ct[i]<<"\t\t"<<tat[i]<<"\t\t\t"<<wt[i]<<"\n";
	}
	cout<<"average turnaround time=";
	for(int i=0;i<n;i++)
	{
		tt=tt+tat[i];
	}cout<<tt/n;
	cout<<"\naverage waiting time=";
	for(int i=0;i<n;i++)
	{
		wtt=wtt+wt[i];
		}cout<<"\t"<<wtt/n;
	cin>>n;
	return 0;
}
