#include<bits/stdc++.h>
using namespace std;
int a[2000005];
int main()
{
    int n,numberOfSwaps=0;
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    for(int i=1; i<=n-1; i++)
    {
        for(int j=1; j<=n-i; j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                numberOfSwaps++;
            }
        }
    }
    cout<<"Array is sorted in "<<numberOfSwaps<<" swaps."<<endl;
    cout<<"First Element: "<<a[1]<<endl;
    cout<<"Last Element: "<<a[n]<<endl;
    return 0;
}
