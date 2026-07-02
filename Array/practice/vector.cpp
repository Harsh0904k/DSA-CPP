#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> a = {1,2,3,4,5};
    for(int i:a){
        cout<<i;
    }

    cout<<endl;

    a.pop_back();
    a.push_back(6);
    
    for(int i:a){
        cout<<i;
    }

    a.insert(a.begin()+4, 5);
    cout<<endl;

    for(int i:a){
        cout<<i;
    }

    cout<<endl;

    vector<int> b = {1,2,3,4,5,6};
    for(int i=0; i<a.size(); i++){
        cout<<a[i]+b[i]<<endl;
    }


}
