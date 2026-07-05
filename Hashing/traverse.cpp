#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map <string, int> marks;
    marks["Harsh"] = 100;
    marks["Raj"] = 90;
    marks["Rohan"] = 85;

    for(auto x : marks){
        cout<<x.first<<" -> "<<x.second<<endl;
    }
}