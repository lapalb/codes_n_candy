#include<bits/stdc++.h>
using namespace std;
void sum(int a[],int l,int r,int s=0)
{
    // This function takes array and it limits as parameter
    // Either you take first element or not take it. Call sum function for both cases
    // Lower index is incremented by 1 and sum for both case is updated
    // When you reach end(l>r), print and break
    if(l>r)
    {
        cout<<s<<"\t";
        return;
    }
    sum(a,l+1,r,s+a[l]);
    sum(a,l+1,r,s);

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
        
        sum(a,0,n-1);
    }
}
