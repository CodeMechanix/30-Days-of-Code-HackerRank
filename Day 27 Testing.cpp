#include <bits/stdc++.h>
using namespace std;

void test_case(bool clase)
{

    int n = 3 + (rand() % (int)(200 - 3 + 1)),
        k = 2 + (rand() % (int)(n-1 - 2 + 1));
    cout << n << ' ' << k << '\n';
    int k_count = 1,
        k_cancel = k - ((rand() % k ) + 1),
        k_not_cancel = k,
        zero = (rand() % (n-1));

    bool pos_f = false , neg_f = false;

    for(int i = 0; i < n; i++)
    {

        int aux = -100 + (rand() % (int)(100 - (-100) + 1));

        if(i == (n-1) && pos_f == false)
        {

            cout << abs(aux) << ' ';

        }
        else if(i == (n-1) && neg_f == false)
        {

            cout << - abs(aux) << ' ';

        }
        else if(i == zero)
        {

            cout << 0 << ' ';
            k_count++;

        }
        else if(clase == false)
        {

            if(k_count < k_cancel && aux < 0)
            {
                cout << aux << ' ';
                neg_f = true;
                k_count++;
            }
            else if(k_count >= k_cancel || aux > 0)
            {
                cout <<abs(aux) << ' ';
                pos_f = true;
            }
        }
        else if(clase == true)
        {

            if((n - i) <= k && k_count < k)
            {
                cout << - abs(aux) << ' ';
            }
            else if(k_count < k_not_cancel && aux < 0)
            {
                cout << aux << ' ';
                neg_f = true;
                k_count++;
            }
            else if(k_count >= k_not_cancel || aux > 0)
            {
                cout <<abs(aux) << ' ';
                pos_f = true;
            }

        }
    }

    cout << '\n';
    return;
}

int main()
{
    srand (time(NULL));

    cout << 5 << '\n';
    test_case(false);
    test_case(true);
    test_case(false);
    test_case(true);
    test_case(false);

    return 0;
}
