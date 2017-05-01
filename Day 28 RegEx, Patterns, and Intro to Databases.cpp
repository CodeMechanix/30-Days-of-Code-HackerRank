#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cases;
    vector<string> name_list;
    cin>> cases;
    for(int i=0; i<cases; i++)
    {
        string name;
        string email;
        cin>>name;
        cin>>email;
        regex re("([a-z@.]{1,50})@([a-z]+.[a-z]+)");
        cmatch matches;

        if(name.length()<=20 && regex_match(email.c_str(),matches,re))
        {
            if(matches[2]=="gmail.com")  //matches[1]=email_id , matches[2]=domain
            {
                name_list.push_back(name);
            }
        }
    }
    sort(name_list.begin(),name_list.end());
    for(int i=0; i<name_list.size(); i++)
    {
        cout<<name_list[i]<<endl;
    }
     return 0;
}
