#include<bits/stdc++.h>
using namespace std;
void FIFO()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
}
int main()
{
FIFO();
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
int i=0;
int j=0;
int s=0;
int k=INT_MAX;
while(i<=j and j<n)
{
while(s<=d and j<n)
{
	s+=a[j++];
}
while(s>d and i<j)
{
k=min(k,j-i+1);	
s-=a[i];
i++;
}
}	
cout<<k<<endl;
}
return 0;
}
