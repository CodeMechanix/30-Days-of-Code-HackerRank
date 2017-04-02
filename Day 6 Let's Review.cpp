#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a ;
    int n;
    cin>>n;
    for(int j=1; j<=n; j++)
    {
        cin>>a;
        int len = a.length();
        // cout<<len;
        for(int i=0; i<len; i=i+2)
        {
            cout<<a[i];
        }
        cout<<" ";
        for(int i=1; i<len; i=i+2)
        {
            cout<<a[i];
        }
        cout<<endl;
    }
    return 0;
}
