#include<iostream>
#include<string>
using namespace std;
int main(){
    cout<<"Enter Your string : ";
    string a;
    cin>>a;
    int b = stoi(a);
    cout<<b;
}

/*
| Conversion             | Function         |
| ---------------------- | ---------------- |
| `int` → `string`       | `to_string(num)` |
| `string` → `int`       | `stoi(str)`      |
| `string` → `long`      | `stol(str)`      |
| `string` → `long long` | `stoll(str)`     |
| `string` → `float`     | `stof(str)`      |
| `string` → `double`    | `stod(str)`      |

*/