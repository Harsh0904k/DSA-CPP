#include <iostream>
#include<vector>
using namespace std;
int len,n;
vector <int> list;
void myvector(int num){
    list.push_back(num);
    len = list.size();
    n = list.size()-1;
}
int main(){
    int a;
    int head = 0;
    cout<<"Enter number you want to enter and 000 to stop "<<endl;
    cin>>a;
    while(a != 000){
        myvector(a);
        cin>>a;
    }

    while(a<n){
    swap(list[a],list[n]);
    a++;
    n--;
    }

    
    for(int i=0; i<len; i++){
        cout<<list[i]<<" ";
    }

}
