#include <iostream>
#include <sstream>
using namespace std;

int s[10000];

bool prime(int n)
{
	if (n<2)return false;
	for (int i=2;i*i<=n;i++)
	{
		if (n%i==0) return false;
	}
	return true;
}

int main ()
{
	int a,b;
	while (cin >>a)
	{
		int max=0;
		for (int i=0;i<32641;i++)
		{
			if (prime(i)) s[max++]=i;
		}
		while (cin >>b)
		{
			cout << s[b+1] << endl;
		}
	}
	
}

