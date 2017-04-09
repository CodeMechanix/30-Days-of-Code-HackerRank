#include<bits/stdc++.h>
using namespace std;
int arr[10005];
int main()
{
    int T;
    cin>>T;
    for(int i=0; i<T; i++)
        cin>>arr[i];
    for(int i=T-1; i>0; i--)
        cout<<arr[i]<<" ";
    cout<<arr[0]<<endl;
    return 0;
}
