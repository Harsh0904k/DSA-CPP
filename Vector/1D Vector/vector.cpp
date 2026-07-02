#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main(){
vector<string> A = {"Volvo", "Audi", "Bmw"};   // vector<type> vectorName


for (int i = 0; i < A.size(); i++) { 
    cout<<A[i]<<" ";
 }

cout<<endl;


cout<<A.front()<<endl;      //front element
cout<<A.back()<<endl;       //last element
cout<<A.at(1)<<endl;        // at given index

A.pop_back();
cout << A.back()<<endl;


A.push_back("Honda");   //insert at last
cout<<A.back()<<endl;  


for (int i = 0; i < A.size(); i++) { 
    cout<<A[i]<<" ";
 }

cout<<endl;

A.insert(A.begin(),"Toyota");
//A.erase(A.begin(),1);   wont work

A.erase(find(A.begin(), A.end(), "Audi"));   //include algorithm to use this

for (int i = 0; i < A.size(); i++) { 
    cout<<A[i]<<" ";
 }




}