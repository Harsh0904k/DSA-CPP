#include<iostream>
using namespace std;

void remove(int x, char arr[], int sz){
    for(int i=x+1; i<4; i++){
        char value = arr[i];
        arr[x] = value;
        x++;
        sz--;
    }
for(int i=0; i<sz; i++){
    cout<<arr[i];
    cout<<endl;
}


}
int main(){
    char a[4] = {'a', 'b', 'c', 'd'};
    int size = 4;

    for(char i : a){ // Here i holds the actual value of a
        cout<<i;
        cout<<endl;

    }

    int q;
    cout<<"Press element number you want to remove"<<endl;
    cin>>q;

    remove(q,a,size);

}