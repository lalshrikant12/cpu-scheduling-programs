#include<iostream>
using namespace std;
void sorting(int bt[],int p[])
{   int temp;
	for(int i=0;i<=3;i++)
	for(int j=0;j<=3-i;j++)
	{
		if(bt[i]>bt[i+1])
	     {
	     	temp=bt[i];
	     	bt[i]=bt[i+1];
	     	bt[i+1]=temp;
	     	
	     	temp=p[j];
	     	p[j]=p[j+1];
	     	p[j+1]=temp; 
		 }
}
}


void turnaround(int tat[],int bt[],int p[],int wt[])
{sorting(bt,p) ;
int sum=0;

 for(int i=0;i<=3;i++)
   {
   	tat[i]=bt[i]+wt[i];
 	
   }
  
}
void waitingtime(int wt[],int tat[],int bt[],int p[])
{   sorting(p,bt);
int sum=0;
	for(int i=0;i<=3;i++)
	{
		sum=sum+bt[i];
		wt[i]=sum;
	
	}

}


void displayall(int p[],int tat[],int bt[],int wt[])
{   float avg=0;
    float avgwt=0;
	cout<<"Process"<<"\t"<<"\t"<<"Burst time"<<"\t"<<"\t"<<"Turnaround time"<<"\t"<<"Waiting time"<<"\n";
	
    sorting(bt,p);
    waitingtime(wt,tat,bt,p);
	turnaround(tat,p,bt,wt);
	

	for(int i=0;i<=3;i++)
	{
		 cout << " " << p[i] << "\t"<<"\t"<< bt[i] <<"\t"<< "\t"
             << tat[i] << "\t\t"<<wt[i]<<"\t\t"<<endl;
	}
	cout<<"Average turnaround time =";
	for(int i=0;i<=3;i++)
	{
		avg=avg+tat[i];
		avgwt=avgwt+wt[i];
	}
	cout<<avg/4<<endl;
	cout<<"Average waiting time =";
	cout<<avgwt/4;
	
}











int main()
{
	int Proc[]={1,2,3,4};
	int BT[]={6,8,7,9};
		int CT[4];
	int TAT[4];
	int WT[4];
	 displayall(Proc,TAT,BT,WT);

	
}
