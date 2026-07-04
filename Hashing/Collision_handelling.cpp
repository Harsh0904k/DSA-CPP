#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> hashtable[10];                    // THIS will create an array of 3 vectors.
    int arr[] = {10, 12, 16, 45, 86, 99, 26};         // A[0] = {}
    for(int i = 0; i<7; i++){                         // A[1] = {}
            int index = arr[i]%10;                    // A[2] = {}        so basically three different conatinner
            hashtable[index].push_back(arr[i]);
    }

    for(int i = 0; i<10; i++){
        cout<<i<<" -> ";
        for(int j=0; j < hashtable[i].size(); j++){
            cout<<hashtable[i][j]<<", ";
        }
        cout<<endl;
    }
}