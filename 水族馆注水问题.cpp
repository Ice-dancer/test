#include<iostream>
using namespace std;


int main()
{
	int num=0;
	cin>>num;
	while(num)
	{
		int n=0;//珊瑚列数
		int x=0;//最大注水量
		int h=0;//高度
		
		cin>>n;
		cin>>x;
		int arr[n]={};
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		
		int sum=0;
		while(sum<=x)
		{
			sum=0;	
			for(int i=0;i<n;i++)
			{
				if(h>arr[i])
					sum+=(h-arr[i]);
				
			}
			h++;
		}
		cout<<"最合适的高度为"<<h-2<<endl;
	}
	
	system("pause");
	return 0;
}
