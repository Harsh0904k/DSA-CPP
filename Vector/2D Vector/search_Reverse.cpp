#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main(){
    vector<vector<int>> A={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    for(int i=0; i<A.size();i++){
        for(int j=0; j<A[i].size(); j++){
            if(A[i][j]==8){
             cout<<"element found at "<<i+1<<" row "<<j+1<<" column";
            }
        }
    }

    reverse(A.begin(), A.end());

    cout << "\nMatrix after reversing rows:\n";
    for (auto row : A) {
        for (auto val : row)
            cout << val << " ";
        cout << endl;
    }

}