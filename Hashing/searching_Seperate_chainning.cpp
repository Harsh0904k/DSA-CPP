#include<iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> hashmap[10];
    int arr[] = {1,21,15,30,31,40,50,60,80,25,75,65,42,80,63,43,23};
    int arrsize = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i<arrsize; i++){
        int index = arr[i] % 10;
        hashmap[index].push_back(arr[i]);
    }

    int search;
    cout<<"Write a number you want to search "<<endl;;
    cin>>search;
     
    int i = search % 10;
        for(int j = 0; j<hashmap[i].size();  j++){
        if(search == hashmap[i][j]){
            cout<<"Found "<<search<<" at index : " << i << " and element : "<<j<<endl;
            return 0;
        }
    }

    
    cout<<"Element Not Found";
}