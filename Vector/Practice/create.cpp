#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> arr = {1,2,3,4,5};
    cout<<arr.front()<<endl;
    cout<<arr.back()<<endl;
    cout<<arr.at(1)<<endl;

    arr.pop_back();
    arr.push_back(0);

    for(int i = 0; i<5; i++){
        cout<<arr[i];
    }

    cout<<endl;

    arr.insert(arr.begin(),0);
    arr.insert(arr.begin()+2,0);

    sort(arr.ends(),arr.begins());

    for(int i = 0; i<arr.size()-1; i++){
        cout<<arr[i];
    }



        
}

