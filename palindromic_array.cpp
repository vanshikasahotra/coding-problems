// { Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;
int PalinArray(int a[], int n);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		cout<<PalinArray(a,n)<<endl;
	}
}// } Driver Code Ends
/*Complete the function below*/
int PalinArray(int a[], int n)
{  //add code here.

for(int i=0;i<n;i++)
{
    int temp=a[i];//555
    int ans=0;
    while(temp>0)
    {
       int y=temp%10; //5   //5   //5
       temp=temp/10;//55     //5    //0
       ans=ans*10+y;//5   55      55*10 +5
    }
    if(ans!=a[i])
        return 0;
}
return 1;
}
