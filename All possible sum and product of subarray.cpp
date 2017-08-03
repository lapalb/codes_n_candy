#include <bits/stdc++.h>

using namespace std;
void sub(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            vector <int> v1;

            for(int k=i;k<=j;k++)
            {
                v1.push_back(a[k]);
            }
            int s=1;
            // required block to calculate sum or product
            for(auto x: v1)
            {
                s*=x;
            }
            cout<<s<<"\t";

        }
    }
}
int main()
{
    int a[]={1,2,3};
    sub(a,3);
}
