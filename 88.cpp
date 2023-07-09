#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cout<<"Enter your string";
    getline(cin,str);
    int w=0;
    int v=0;
    int c=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]=='a' || str[i]=='A' || str[i]=='e' || str[i]=='E' || str[i]=='u' || str[i]=='U' || str[i]=='o' || str[i]=='O' || str[i]=='i' || str[i]=='I')
        {
            v++;
        }
        else if (str[i]==' ')
        {
            w++;
        }
        else
        {
            c++;
        }
    }
    cout<<"Number of vowels are "<<v<<endl;
    cout<<"Number of consonants are "<<c<<endl;
    cout<<"Number of words are "<<w+1<<endl;
    return 0;
}