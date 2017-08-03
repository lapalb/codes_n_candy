#include<bits/stdc++.h>
using namespace std;
int MSA(int a[],int n)
{
    int m=INT_MIN;
    for(int i=0;i<n;i++)
    {
        int res=0;
        for(int j=i;j<n;j++)
        {
            res+=a[j];
            if(m<res)
            m=res;
        }
        
    }
    return m;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[n];
        }
        cout<<MSA(a,n)<<endl;
    }
}
