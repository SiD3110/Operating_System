#include<iostream>
using namespace std;
int main()
{  int n; cout<<"enter no of process";
   cin>>n;
	int at[n],bt[n] ,wt[n],tat[n],ct[n];
	cout<<"enter arrival time";
	for(int i=0;i<n;i++)
	{
		cin>>at[i];
	}
	cout<<"enter burst time";
	for(int i=0;i<n;i++)
	{
		cin>>bt[i];
	}
	
	for(int i=0;i<n;i++)
	{
		ct[i]=ct[i-1]+bt[i];
	}
	for(int i=0;i<n;i++)
	{
		tat[i]=ct[i]-at[i];
	}
	for(int i=0;i<n;i++)
	{
		wt[i]=tat[i]-bt[i];
	}
	cout<<"arrival time\t burst time\t completion time\t turnaround time\twaiting time\t";
	for(int i=0;i<n;i++)
	{
		cout<<"\n"<<at[i]<<"\t\t\t"<<bt[i]<<"\t\t"<<ct[i]<<"\t\t"<<tat[i]<<"\t\t"<<wt[i]<<"\n";
	}
	cin>>n;
	return 0;
}
