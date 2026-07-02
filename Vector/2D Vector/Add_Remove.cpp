#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>> A(3,vector<int>(3)); // 3*3 vector with all zeros
        for(int i=0; i<A.size(); i++){
        for(int j=0; j<A[0].size(); j++){
           cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    A.push_back({1,2,3});            // Add a row at last

        for(int i=0; i<A.size(); i++){
        for(int j=0; j<A[0].size(); j++){
           cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }

    A[0].push_back(1);  //insert element at the end of first row
    A[1].push_back(2);
    A[2].push_back(3);
    A[3].push_back(4);


    cout<<endl;

        for(int i=0; i<A.size(); i++){
        for(int j=0; j<A[0].size(); j++){
           cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }

    vector<int> new_row = {5,6,7,8};    // Insert a row at given index
    A.insert(A.begin() + 1, new_row);

       cout<<endl;

        for(int i=0; i<A.size(); i++){
        for(int j=0; j<A[0].size(); j++){
           cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    vector<int> x = {1,2,3,4,5};    // should match number of rows
    for(int i=0; i<A.size(); i++){         
        A[i].insert(A[i].begin()+1, x[i]);           //Insert Column at index
    }

        for(int i=0; i<A.size(); i++){
        for(int j=0; j<A[0].size(); j++){
           cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }

    A.pop_back();

cout<<endl;                                  //delete last row
        for(int i=0; i<A.size(); i++){
        for(int j=0; j<A[0].size(); j++){
           cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }

    A.erase(A.begin()+1);           //delete row at index

    cout<<endl;                             
        for(int i=0; i<A.size(); i++){
        for(int j=0; j<A[0].size(); j++){
           cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }

    A[0].pop_back();    // last element of first row
    A[1].pop_back();
    A[2].pop_back();

     cout<<endl;                             
        for(int i=0; i<A.size(); i++){
        for(int j=0; j<A[0].size(); j++){
           cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i=0; i<A.size(); i++){
        A[i].erase(A[i].begin()+1);              // delete column at index 1
    }
    

        cout<<endl;                             
        for(int i=0; i<A.size(); i++){
        for(int j=0; j<A[0].size(); j++){
           cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }

    if(A.empty()){
        cout<<"A is empty";
    }



}


