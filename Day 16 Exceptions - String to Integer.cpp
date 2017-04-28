#include<bits/stdc++.h>
using namespace std;
int main()
{
    string S;
    cin >> S;

    try
    {
        int n = stoi( S );
        cout << n << endl;
    }
    catch( const invalid_argument& ia )
    {
        cout << "Bad String" << endl;
    }
    return 0;
}
