#include<iostream>
#include<string>
using namespace std;
int main(){
    char a = 'h';
    char b = 'i';

    string s(1,a);   //s(no. of times, element)
    cout<<s<<endl;;

    string q(5,a);
    cout<<q<<endl;

    string m;
    m.push_back(a);
    m.push_back(b);
    cout<<m<<endl;

    string u="";
    u = u+a+b+'i';
    cout<<u;


}