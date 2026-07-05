#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map <int, int> freq;
    vector <int> nums = {1,5,6,1,8,3,2,1,4,8,8,6,1,2,3,5,6,4,2,3,2,1,2,4,8,5,6,3,9,3,2,1,2,1,4,5,6,3,8,9,7,2,7,1,5,6,7,5,5};
    for(int i = 0; i<nums.size(); i++){
        freq[nums[i]]++;
    }

    for(auto x : freq){
        cout<<x.first<<" -> "<<x.second<<endl;
    }

}