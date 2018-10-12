#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter no of pages";
	cin>>n;
	int r[n];
	int f[3]={0,0,0};
	int ph=0;
    int t;
	int pf=0;
	int z=0;
	cout<<"enter reference strings";
	for(int i=0;i<n;i++)
	{
	    t=1;	
		if(z==3)
		z=0;
		cin>>r[i];
		for(int j=0;j<3;j++){
		
		if(r[i]==f[j])
		{
		    t=0;
		    break;
		}
	}
		if(t==1){
			pf=pf+1;
			f[z]=r[i];
			z++;
		}
		 if(t==0)
		 {
		 	ph=ph+1;
		 }
	}
	cout<<"\npage faults="<<pf;
	cout<<"\npage hits"<<ph;
}
