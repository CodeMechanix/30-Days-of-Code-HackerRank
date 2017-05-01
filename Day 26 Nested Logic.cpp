#include <bits/stdc++.h>
using namespace std;

int getdate(int ad, int am, int ay)
{
    return ad + am * 100 + ay * 10000;
}

int calcFine( int ad, int am, int ay,
              int ed, int em, int ey)
{
    int adate = getdate(ad, am, ay);
    int edate = getdate(ed, em, ey);
    if (adate < edate)
        return 0;

    if (ay > ey)
        return 10000;
    else if (am > em)
        return (am - em) * 500;
    else if (ad > ed)
        return (ad - ed) * 15;

    return 0;
}

int main()
{
    int ad, am, ay;
    int ed, em, ey;

    cin >> ad >> am >> ay;
    cin >> ed >> em >> ey;

    cout << calcFine(ad, am, ay, ed, em, ey) << endl;
    return 0;
}
