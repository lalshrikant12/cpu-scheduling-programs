#include<iostream>
using namespace std;
void completion(int ct[],int bt[])
{
	int sum=0;
	for(int i=0;i<=4;i++)
	{
		sum=sum+bt[i];
		ct[i]=sum;
	}
	
}
void turnaround(int tat[],int ct[],int at[],int bt[])
{ completion(ct,bt);

 for(int i=0;i<=4;i++)
   {
 	tat[i] = ct[i] -at[i];
 	
   }
  
}
void waitingtime(int wt[],int tat[],int bt[])
{
	for(int i=0;i<=4;i++)
	{
		wt[i]=tat[i]-bt[i];
	
	}

}
void displayall(int process[],int tat[],int bt[],int wt[],int ct[],int at[])
{   float avg=0;
    float avgwt=0;
	cout<<"Process"<<"\t"<<"Arival time"<<"\t"<<"Burst time"<<"\t"<<"Completion time"<<"\t"<<"Turnaround time"<<"\t"<<"Waiting time"<<"\n";
	

	turnaround(tat,ct,at,bt);
	waitingtime(wt,tat,bt);
	completion(ct,bt);
	for(int i=0;i<=4;i++)
	{
		 cout << " " << process[i] << "\t\t" << at[i]<<"\t\t"<< bt[i] <<"\t\t"<< ct[i]<< "\t\t"
             << tat[i] << "\t\t"<<wt[i]<<"\t\t"<<endl;
	}
	cout<<"Average turnaround time =";
	for(int i=0;i<=4;i++)
	{
		avg=avg+tat[i];
		avgwt=avgwt+wt[i];
	}
	cout<<avg/5<<endl;
	cout<<"Average waiting time =";
	cout<<avgwt/5;
	
}
int main()
{
	int p[]={0,1,2,3,4};
	int BT[]={2,6,4,9,12};
	int AT[]={0,1,2,3,4};
	int CT[5];
	int TAT[5];
	int WT[5];

    displayall(p,TAT,BT,WT,CT,AT);	

    return 1;
}
