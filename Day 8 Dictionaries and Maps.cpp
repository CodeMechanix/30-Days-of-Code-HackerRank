#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> myPhoneBook;
    map<string, int>::iterator it;
    string name, key;
    int phoneNumber, n;
    cin>>n;

    for(int i = 0; i < n; i++)
    {
        cin >> name >> phoneNumber;
        myPhoneBook.insert(make_pair(name, phoneNumber));
    }

    while( cin >> key)
    {
        it = myPhoneBook.find(key);

        if (it != myPhoneBook.end())
        {
            cout<<it->first<<"="<<it->second<<endl;
        }
        else
        {
            cout <<"Not found\n";
        }
    }

    return 0;
}
