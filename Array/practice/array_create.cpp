#include <iostream>
using namespace std;
int sum(int arr[], int size){
    int sum1 = 0;
    for(int i = 0; i<size; i++){
        sum1 = sum1 + arr[i];
    }
    return sum1;

}
int main(){
    int a[5] = {};
    int num;

    for(int n = 0; n<5; n++){
        cout<<"Enter number to insert ";
        cin>>num;
        a[n] = num;
    }

    cout<<"your array is ";
    for(int i = 0; i<5; i++){
        cout<<a[i];
    }
    cout<<endl;

    int size = sizeof(a)/sizeof(a[0]);
    int s = sum(a,size);
    cout<<" sum is "<< s;

}