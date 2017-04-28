#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference
{
private:
    vector<int> elements;

public:
    int maximumDifference;
    Difference(vector<int> a): elements(a) {}
    void computeDifference()
    {
        std::sort (elements.begin(), elements.end());
        maximumDifference = elements[0] - elements[elements.size() -1];
        if (maximumDifference <0)
            maximumDifference *= -1;

    }
};
int main()
{
    int N;
    cin >> N;

    vector<int> a;

    for (int i = 0; i < N; i++)
    {
        int e;
        cin >> e;

        a.push_back(e);
    }

    Difference d(a);

    d.computeDifference();

    cout << d.maximumDifference;

    return 0;
}
