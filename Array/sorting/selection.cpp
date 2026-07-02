#include<iostream>
#include<vector>
using namespace std;
int main(){
vector <int> V = {3,4,5,2,6,7,8,1,9};

for (int i = 0; i<V.size(); i++ )
{
    int select = i;
for(int x = i; x<V.size();x++)
{
    if (V[x] < V[select])
    {
        select = x;
    }
}
if(select != i){
swap(V[i],V[select]);
}
}
   for(int i:V)
    {
    cout<<i<<" ";
    }
}