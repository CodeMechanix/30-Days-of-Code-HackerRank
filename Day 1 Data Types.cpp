#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    int a;
    double b;
    char name[10000];
    char k;
    scanf("%d %lf %[^\n]",&a,&b,name);
    printf("%d\n",a+i);
    printf("%.1lf\n",b+d);
    cout<<s+name<<endl;
    return 0;
}
