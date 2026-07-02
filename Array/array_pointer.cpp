#include <iostream>
using namespace std;
int main(){
    
    int a[5] ={1,2,3,4,5};

    cout<<a<<endl;
    cout<<&a[0]<<endl;

    int* ptr = a;
    cout<<ptr<<endl;

    for (int i=0; i<5; i++){
        cout << *(ptr+i) <<" ";
    }





}