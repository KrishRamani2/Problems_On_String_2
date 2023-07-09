#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cout<<"Enter your email id to get username";
    getline(cin,str);
    int i = (int)str.find('@');
    cout<<str.substr(0,i);
    return 0;
}
    