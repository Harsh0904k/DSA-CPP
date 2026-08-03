#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    string s = "pwwkew";
    unordered_map<char,int> nums;
    int left = 0;
    int right = 0;
    int Max = 0;

    while(right<s.length()){
        nums[s[right]]++;
        while(nums[s[right]]>1){
            nums[s[left]]--;
            left++;
        }
        Max = max(right-left+1,Max);
        right++;
        
    }
    cout<<Max;
    return 0;
}