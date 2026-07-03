#include<iostream>
using namespace std;
int main(){
    int HashTable[10] = {0};
    int arr[] = {10, 25, 37, 18};

    for(int  i = 0; i<4; i++){
        int index = arr[i] % 10;
        HashTable[index] = arr[i];
    }

    for(int i=0; i<10; i++){
        cout<<i<<" : "<<HashTable[i]<<endl;
    }
}