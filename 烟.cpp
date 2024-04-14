#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int sum=n;
	while(n-k>=0)
	{
		n=n-k;
		sum++;
		n++;
	}
	cout<<sum<<endl;
	
	return 0;
}
