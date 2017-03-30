#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    double mealCost,tipPercent,taxPercent;
    double tip , tax,totalCost;
    cin>>mealCost>>tipPercent>>taxPercent;
    tip = (mealCost)*(tipPercent/100);
    tax = (mealCost)*(taxPercent/100);
    totalCost = mealCost + tip + tax;
    cout<<"The total meal cost is "<<round(totalCost)<<" dollars."<<endl;
    return 0;
}
