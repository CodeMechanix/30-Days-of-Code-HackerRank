#include <iostream>
using namespace std;
int main()
{
    int  T, n;
    std::cin >> T;
    while(T--)
    {
        cin >> n;
        bool prime = n > 1;
        for(int i = 2; i * i <= n  && prime; i++)
            if(n % i == 0) prime = false;
        cout << (prime ? "Prime" : "Not prime") << "\n";
    }
}
