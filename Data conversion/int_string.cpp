#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cout<<"Enter Int : ";
    cin>>n;
    string s = to_string(n);
    cout<<s;
    cout<<endl;

    for(auto x : s){  //wrong way
        cout<<s<<" ";
    }
}