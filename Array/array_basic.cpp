#include <iostream>
using namespace std;
int main(){
int arr[5] = {1,2,3,4,5};
cout<<arr[0]<<endl;
for (int i = 0; i < 5 ; i++){
    cout<<arr[i]<<" ";
}

cout<<endl;

int b[3] = {1,2,3};          
for (int i = 0; i < 5 ; i++){    // any garbage value
    cout<<b[i];
} 

cout<<endl;

int A[5] = {1,2,3}; // rest elements are 0
for (int i : A ){     // i in A, i will take values from array i.e, 1,2,3
    cout << i;
}

cout<<endl;

int m[5] = {0};
for (int i : m ){
    cout<< i;
}

}