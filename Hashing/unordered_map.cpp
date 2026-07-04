#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map <int, string> student;
    student[101] = "Harsh";
    student[102] = "Raj";
    student[103] = "Ravi";

    cout<<student[101];

}