#include<iostream>
#include<vector>
using namespace std;
int main(){
    cout<<"hello"<<endl;
    int arr[5] = {1,2,3,4,5};
    for(int i=0; i<5; i++){
        cout<<arr[i];
    }
    cout<<endl;

vector<int> b = {1,2,3,4,5};
for(int a = 0; a < b.size(); a++ ){
    cout<<b[a];
}
cout<<endl;

vector<int> c = {};
c.push_back(0);
c.push_back(1);
c.push_back(2);
c.push_back(4);
c.insert(c.begin()+3, 3);



for(int a = 0; a < c.size(); a++ ){
    cout<<c[a];
}

}