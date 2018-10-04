
#include<iostream>
using namespace std;
int main()
{
		int np;
		int z=0;
		cout<<"enter no of process:";
	cin>>np;
	int nr;
	cout<<"enter no of resources:";
	cin>>nr;
	int al[np][nr];      //allocation
	int max[np][nr];
	int av[nr];          //available
	int ne[np][nr];      //need
    int c=np;
    int count=0;
    int pro[nr];
	cout<<"enter allocation matrix\n";         
	for(int i=0;i<np;i++)
	{
		for(int j=0;j<nr;j++)       
		{cin>>al[i][j];
		}
	}
	cout<<"enter max\n";
	for(int i=0;i<np;i++)
	{
		for(int j=0;j<nr;j++)
		{cin>>max[i][j];
		}
	}
	cout<<"enter available\n";
	for(int i=0;i<nr;i++)
	cin>>av[i];
	for(int i=0;i<np;i++)
	{
		for(int j=0;j<nr;j++)
		{ne[i][j]=max[i][j]-al[i][j];
		}
	}
	cout<<"need=";
	for(int i=0;i<np;i++)
	{
		cout<<"\n";
		for(int j=0;j<nr;j++)
		{
			cout<<ne[i][j];
		}
	}
	cout<<"\nenter the sequence:";
	for(int i=0;i<np;i++)
	cin>>pro[i];
	while(c)
	{
		if(z==4)
		z=0;
		int t=0;
		int q=pro[z];
		q=q-1;
		for(int j=0;j<nr;j++)
		{
			if(ne[q][j]>av[j])
			{
				count++;
				t=1;
				cout<<"sequence is unsafe";
				return 0;
			}
			else
			{
				t=0;
			}
		}
			if(t==0)
			{
			    for(int j=0;j<nr;j++)
		            {av[j]+=al[q][j];}
		        c--;
				    
		    }
			z++;	      
	}
    if(c==0)
    cout<<"safe state";
	
	
	
}
