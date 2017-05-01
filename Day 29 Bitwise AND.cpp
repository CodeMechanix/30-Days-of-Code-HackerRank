#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++)
    {
        int N;
        int K;
        cin >> N >> K;
        int max=0;
        int val=0;
        for(int i=1; i<N; i++)
        {
            for(int j=i+1; j<=N; j++)
            {
                val = i&j;
                if(val <K && val>max)
                {
                    max = val;
                }
            }
        }
        cout<<max<<endl;
    }
    return 0;
}
