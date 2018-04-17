#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int bits = sizeof(n)*8;
    int consecutiveOnes, consecutiveOnesMax;
    consecutiveOnes = consecutiveOnesMax = 0;
    while (bits--)
    {
        if (n & 1)
        {
            ++consecutiveOnes;
        }
        else
        {
            if (consecutiveOnes > consecutiveOnesMax)
            {
                consecutiveOnesMax = consecutiveOnes;
            }
            consecutiveOnes = 0;
        }
        n >>= 1;
    }
    cout << consecutiveOnesMax << endl;
    return 0;
} 

