#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
int main(){
    unordered_map<int, int> frequency;
    vector<int> student = {1,2,3,2,4,3,2,1,3,5,8,5,1,2,3,6,5,48,5,3,2,5,2,1,1,3,1};

    int n = student.size();
    for(int i = 0; i<n; i++){
        frequency[student[i]]++;   
        cout<<student[i]<<" -> "<< frequency[student[i]]<<endl; //Test line
    }
cout<<endl;
    cout<<frequency[1];

}