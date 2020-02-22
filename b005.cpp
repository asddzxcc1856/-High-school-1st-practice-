#include <iostream>
using namespace std; 
int main()
{
	int n,i,j,n_max;
	cin>>n;
	int song_n[n],song_c[n];
	for(i=0;i<n;i++)
	{
		cin>>song_n[i];
		song_c[i]=1;
	}
	for(i=0;i<n;i++)                    
	{
		for(j=0;j<i;j++)                 
		{
			if(song_n[i]==song_n[j])
			{                                                                       
				song_n[i]=0;                             
				song_c[i]=0;            
				song_c[j]++;           
				break;      
			}
		}
	}
	
	n_max=0;
    for(i=0;i<n;i++)
    {
    	if(song_c[n_max]<song_c[i])
    	{
    		n_max=i;
		}
	}
	cout <<song_n[n_max]<<" "<<song_c[n_max];	
	return 0;
}
 
