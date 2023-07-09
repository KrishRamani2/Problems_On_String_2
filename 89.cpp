#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cout<<"Enter your string to checck if palindrome or not";
    getline(cin,str);
    string rev ="";
    int len = (int)str.length();
    rev.resize(len);
    for(int i=0,j=len-1;i<len;i++,j--)
    {
        rev[i]=str[j];
    }
    rev[len]='\0';
    if(str.compare(rev)==0)
    {
        cout<<"Palindrome String";
    }
    else
    {
        cout<<"Not A Palindrome";
    }
    return 0;
}