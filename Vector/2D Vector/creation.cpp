#include<iostream>
#include<vector>
using namespace std;
  
int main(){
vector<vector<int>> A = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};
    int first_element = A[0][0]; //x axis, y axis
    cout<<first_element <<endl;    
    cout<<A[1][1]<<endl;
    cout<<A[0][2]<<endl;

    

    cout<<endl;

    for(int i=0; i<3; i++){
        for(int j=0; j<3;j++){

            cout<<A[i][j]<<" ";
        }
        cout<<endl;
     }


}