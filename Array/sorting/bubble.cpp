#include<iostream>
#include<vector>
using namespace std;
int main(){
vector <int> T = {5,4,1,2,3,9,8,7,6};
int size = T.size();

for(int x = 0; x<size; x++){
for(int i=0; i < size-1-x;i++){
    if (T[i]>T[i+1])
    {
        swap(T[i],T[i+1]);
    }
    else
    {
        continue;
    }
}
} 
     for(int x : T)
    {
            cout<<x<<" ";
    }
}
