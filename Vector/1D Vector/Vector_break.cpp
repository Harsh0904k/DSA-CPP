#include<iostream>
#include<vector>
using namespace std;
int main(){
        vector<string> A = {"flower","fruit"};
           
        cout<<A[0][2]<<endl;


        int n = A.size();

        for(int i = 0; i<n; i++){
          cout<<"word is "<<A[i]<<endl;

          string word = A[i];
          int n1 = word.size();
          for(int x = 0; x<n1; x++)
          cout<<word[x]<<",";
          cout<<endl;

          
        }


}