#include<iostream>
using namespace std;
int main(){
    int count = 0;
int a[8] = {1,2,0,4,0,0,1,0};
for (int i : a){
    if (i == 0){
        count ++;
    }
}
cout<<count;

}