#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    string a = "hello";
    cout<<a[0]<<endl;
    cout<<a<<endl;

    string b = "";
    cout<<b<<endl;
    b = b + "h";
    b += "i";
    cout<<b<<endl;

    b.push_back('e');
    // b.push_back("eee"); wont work, we can push back only char.
    cout<<b<<endl;


    cout<<"Enter another Sentence : "; //Hello World
    string d;
    getline(cin, d);   //cin will read compete sentence

    cout<<d<<endl;

    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};

    cout<<strs[0][0];

}