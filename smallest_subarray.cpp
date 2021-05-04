#include<bits/stdc++.h>
using namespace std;
void run()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
/*#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif*/
}
int main()
{
run();
int t;
cin>>t;
while(t--)
{
int n,d;

	cin>>n>>d;//51
	int a[n];
for(int i=0;i<n;i++)
{
	cin>>a[i];   //1, 4, 45, 6, 0, 19
}

int k=INT_MAX;
for(int i=0;i<n;i++)//i=0
{
	int s=0;
	for(int j=i;j<n;j++)//j=0   //j=1
	{
s+=a[j];    //1+4+45+6  //4+45+6
if(s>d)
{
	k=min(k,j-i+1);  //4  //3
	}
}
}
cout<<k<<endl;
}
return 0;
}
