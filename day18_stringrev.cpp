#include<iostream>
using namespce std;

void reverse(string s)
{
    if(s.length()==0)
    {
        return;
    }

    string ros = s.substr(1);
    reverse(ros);
    cout<<s[0];
}

int main()
{
    reverse("shruti");

    return 0;
}
