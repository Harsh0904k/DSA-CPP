#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map <int, string> student;
    unordered_map<string, int> age;
    student[101] = "Harsh";
    student[102] = "Raj";
    student[103] = "Ravi";
    student[104];
    student[105];

    age["Harsh"] = 21;
    age["Raj"] = 24;
    age["Ravi"];
    age["Ravi"]++;
    age["Rahul"];

    cout<<student[101]<<endl;
    cout<<student[104]<<endl;
    cout<<age["Harsh"]<<endl;
    cout<<age["Ravi"]<<endl;
    cout<<age["Rahul"];
}