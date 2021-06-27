#include<iostream>
using namespace std;
#include<cstring>
#include<algorithm>
using namespace std;

inline bool mycompare(pair<string,int> a,pair<string,int> b)
{
    if(a.second==b.second)
    {
        return a.first<b.first;//eva<tiza //true
    }
    return a.second > b.second;  //20>10
}
int main()
{
    int x,n,i;
    cin>>x;
    pair<string ,int>a[100000];
    cin>>n;
    
    for(i=0;i<n;i++)
    {
        cin>>a[i].first;
        cin>>a[i].second;
    }
    sort(a,a+n,mycompare);
    for(i=0;i<n and a[i].second>=x;i++)
    {
        cout<<a[i].first<<" "<<a[i].second<<endl;
    }
}

