#include<bits/stdc++.h>
using namespace std;
void sop(int a[],int n)
{
    // The idea is that SOP= (1+a[1])(1+a[2])... -1
    int ans=1;
    for(int i=0;i<n;i++)
    {
        ans*=(1+a[i]);
    }
    cout<< ans-1;
}

int main()
{
    //Finding number of test cases
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        // Finding number element in array
        int n;
        cin>>n;
        // Declaring the array
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        sop(a,n);
    }
}
