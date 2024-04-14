/*#include<bits/stdc++.h>
using namespace std;
int a[10001],c[100001];
int main()
{
	string s;
	int b;
	cin>>s>>b;
	
	//逆序转存整形数组
	int len=s.length();
	for(int i=0;i<len;i++)
	{
		a[len-i-1]=s[i]-'0';
	}
	
	//逐位相乘，处理进位
	for(int i=0;i<len;i++)
	{
		c[i]+=a[i]*b;
		if(c[i]>=10)
		{
			c[i+1]+=c[i]/10;
			c[i]%=10;
		}
	}
	
	//判断进位是否导致len增加
	while(c[len]>0)
	{
		if(c[len]>=10)
		{
			c[len+1]+=c[len]/10;
			c[len]%=10;
		}
		len++;
	}
	
	//删除多余前导0
	while(c[len-1]==0&&len>1)
		len--;
	
	//逆序输出结果
	for(int i=len-1;i>=0;i--)
	{
		cout<<c[i];
	}
	
	return 0;
}*/
#include<bits/stdc++.h>
using namespace std;
int a[10001],c[100001];
string mul(string s,int b)
{
	//逆序转存整形数组
	int len=s.length();
	for(int i=0;i<len;i++)
	{
		a[len-i-1]=s[i]-'0';
	}
	
	//逐位相乘，处理进位
	for(int i=0;i<len;i++)
	{
		c[i]+=a[i]*b;
		if(c[i]>=10)
		{
			c[i+1]+=c[i]/10;
			c[i]%=10;
		}
	}
	
	//判断进位是否导致len增加
	while(c[len]>0)
	{
		if(c[len]>=10)
		{
			c[len+1]+=c[len]/10;
			c[len]%=10;
		}
		len++;
	}
	
	//删除多余前导0
	while(c[len-1]==0&&len>1)
		len--;
	
	string ans;
	for(int i=len-1;i>=0;i--)
	{
		ans+=c[i]+'0';
	}
	return ans;
}
int main()
{
	string s;
	int b;
	cin>>s>>b;
	
	string ans=mul(s,b);
	cout<<ans;
	
	return 0;
}
