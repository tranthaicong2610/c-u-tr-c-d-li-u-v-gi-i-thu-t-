#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<cmath>
#include<stack>
#include <iomanip> 
using namespace std;


int main()
{
	int test;cin>>test;
	while(test--)
	{
		int n;cin>>n;
	int a[n+1];
	for(int i=0;i<=n;i++) a[i]=1;
	for(int i=2;i<=n;i++)
	{
		for(int j=i;j<=n;j+=i)
		{
			if(a[j]==0) a[j]=1;
			else a[j]=0;
		}
	}
	int count=0;
	for(int i=1;i<=n;i++)
		if(a[i]) count++;
		cout<<count<<endl;
	}

	
	return 0;
}
