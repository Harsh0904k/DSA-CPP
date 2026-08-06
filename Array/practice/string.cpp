#include<iostream>
using namespace std;
int main(){
    string s = "hello";
    string t = s.substr(0,3);
    if(s!=t){
        cout<<true;
    }
cout<<t;
}