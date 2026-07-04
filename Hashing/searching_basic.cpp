#include<iostream>
using namespace std;
int main(){
    int Hashtable[10] = {0};
    int arr[] = {10, 12, 16, 45, 86, 99};
    for(int i = 0; i<6; i++){
        int index = arr[i] % 10;
        Hashtable[index] = arr[i]; 
    }

    int input;
    cout<<"Enter the value you want to search (10, 12, 16, 45, 86,99)"<<endl; 
    cin>>input;
    if(input == Hashtable[input%10]){
    cout<<Hashtable[input % 10]<<" found on index "<< input%10; // 86 and 16 on same index Collision
    }
    else{
        cout<<"Not Found";
    }
}