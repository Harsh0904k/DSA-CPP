#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> perm(vector<int> A){
    int n = A.size();
    int tail = n-1;
    vector<vector<int>>permutation;
    vector<int>temp = A;
    permutation.push_back(temp);

    for(int head = 0; head<n; head++){
        cout<<"main"<<endl;
        
        tail = n-1;

    while(head<tail){
        vector<int>temp = A;
        swap(temp[head],temp[tail]);
        permutation.push_back(temp);
        tail--;
        
        cout<<"loop"<<endl;
        for(int i = 0; i<temp.size();i++){
            cout<<temp[i]<<" ";
        }
        cout<<endl;
    }
    }
    return permutation;

}


int main(){
    vector<int> x ={1,2,3};
    vector<vector<int>> A = perm(x);

    cout<<"int"<<endl;

        for(int i=0; i<A.size(); i++){
        for(int j=0; j<A[i].size();j++){

            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }

}


                                                                                    

