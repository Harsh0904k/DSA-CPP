#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<string>> A = {
        {"hello","its","beginning"},
        {"we","will'be","learing"}
    };

    cout<<A.size()<<endl; // no of row
    cout<<A[0].size()<<endl;  //no of column
    cout<<A[0][0].size()<<endl; //size of [0,0] element, i.e first element.

        for(int i=0; i<A.size(); i++){
        for(int j=0; j<A[0].size();j++){

            cout<<A[i][j]<<" ";
        }
        cout<<endl;
     }
}