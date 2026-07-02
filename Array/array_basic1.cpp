#include <iostream>
using namespace std;

int main(){

int a[5] = {1,2,3,4,5};
a[0] = 0;

for (int i=0; i<5; i++){
    cout<<a[i];
}
cout<<endl;

    // Size of one element of an array
    cout << "Size of a[0]: " << sizeof(a[0])
    << endl;

    // Size of  'arr'
    cout << "Size of a: " << sizeof(a) << endl;

    // Length of an array
    int n = sizeof(a) / sizeof(a[0]);

    cout << "Length of an array: " << n << endl;

int arr[] = {1,2,3,4,5};            // without giving size
cout<<arr[1];



}
