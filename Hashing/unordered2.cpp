#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;
int main(){
    int a[] = {1,2,3,4,5,6};
    string b = "abcdef";

    unordered_map <int,string>relation;
int n = sizeof(a) / sizeof(a[0]);
for(int i = 0; i<n;i++){
    relation[a[i]]=b[i];
}

for(auto x:relation){
    cout<<x.first<<" -> "<<x.second<<endl;
}

unordered_map<int,vector<char>>

}