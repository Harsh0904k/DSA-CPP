#include<iostream>
#include<vector>
using namespace std;
int main(){
    int count = 1;
    vector <vector <int>> A(3,vector<int>(3,0)); // 3 rows, 3 column all containing 0
    for(int i=0; i<3;i++){
        for(int j=0; j<3; j++){
            A[i][j]=count;
            count++;
        }
    }

        for(int i=0; i<3;i++){
        for(int j=0; j<3; j++){
           cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
}