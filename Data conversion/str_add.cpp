/*
| Character | ASCII |
| --------: | ----: |
|     `'0'` |    48 |
|     `'1'` |    49 |
|     `'2'` |    50 |
|     `'3'` |    51 |
|     `'9'` |    57 |

so we sub 0

*/#include<iostream>
using namespace std;
int main(){
    string s1 = "1";
    string s2 ="2";
    int s3 = (s1[0]-'0')*(s2[0]-'0');
    cout<<s3;
}