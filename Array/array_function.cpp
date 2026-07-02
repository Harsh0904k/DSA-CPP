#include<iostream>
using namespace std;

void print(int arr[], int n){
    for (int i=0; i<n ; i++){
        cout<<arr[i];
    }
}

int insert(int arr[], int size, int n, int index, int element){
    if ( size == n){
        cout<<"array is full"<<endl;
    }
    
    arr[index] = element;
    print(arr,n);
    return size+1;

    
}

int main(){
int A[10] = {1,2};
int size = sizeof(A)/ sizeof(A[0]);
int n = 10;
int index = 0;

size = insert(A,size,n,1,3);

}
