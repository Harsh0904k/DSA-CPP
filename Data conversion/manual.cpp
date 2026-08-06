#include<iostream>
using namespace std;
class Solution {
public:
    string multiply(string num1, string num2) {
        int a = 0;
        for(char ch : num1){
            a = a*10 + (ch - '0');
        }
        int b = 0;
        for(char ch : num2){
            b = b*10 + (ch-'0');
        }
        int c = a*b;
        string s;
        
        while(c>0){
            char ch = c%10 + '0';
            s = ch+s;
            c = c/10;
        }
        return s;
    }
};

int main(){
    string num1 = "2";
    string num2 = "3";
    Solution a;
    string ans = a.multiply(num1,num2);
    cout<<ans;


}