#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main(){
    vector<vector<int>> A={
       {5,8,6},
       {2,9,1},
       {4,5,3}
    };

  sort(A.begin(),A.end());   //sort based on first element of row.

      cout << "\nMatrix after sorting:\n";
    for (auto row : A) {
        for (auto val : row)
            cout << val << " ";
        cout << endl;
    }

    for(int i=0; i<A[0].size(); i++){
        sort(A[i].begin(),A[i].end());           //sort each row iindividually
    }

    cout<<endl;

        for(int i=0; i<A.size(); i++){
        for(int j=0; j<A[i].size();j++){

            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }

}

