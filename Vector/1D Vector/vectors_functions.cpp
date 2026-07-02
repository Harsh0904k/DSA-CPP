#include <iostream>
#include <vector>
#include <algorithm> // For sort, reverse, etc.
using namespace std;

int main() {
    // 1. Declaration
    vector<int> v1;                    // empty vector
    vector<int> v2(5);                 // 5 elements default (0)
    vector<int> v3(3, 10);             // 3 elements of value 10
    vector<int> v4 = {1, 2, 3};        // initializer list
    vector<int> v5(v3);                // copy constructor

    // 2. Modifiers
    v1.push_back(1);                   // [1]
    v1.push_back(2);                   // [1, 2]
    v1.pop_back();                     // [1]

    v1.insert(v1.begin(), 0);          // [0, 1]
    v1.insert(v1.end(), 2, 9);         // [0, 1, 9, 9]
    v1.erase(v1.begin() + 1);          // [0, 9, 9]
    v1.erase(v1.begin(), v1.begin() + 2); // [9]
    v1.assign(4, 7);                   // [7, 7, 7, 7]
    v1.resize(6, 99);                  // [7, 7, 7, 7, 99, 99]
    v1.pop_back();                    // remove last => [7,7,7,7,99]
    
    vector<int> temp = {1, 2, 3};
    v1.swap(temp);                     // v1 = [1,2,3]
    v1.clear();                        // []

    // 3. Access
    v1 = {10, 20, 30};
    cout << "v1[1]: " << v1[1] << endl;         // 20
    cout << "v1.at(2): " << v1.at(2) << endl;   // 30
    cout << "Front: " << v1.front() << endl;    // 10
    cout << "Back: " << v1.back() << endl;      // 30

    int* ptr = v1.data();              // data pointer
    cout << "First element via data(): " << *ptr << endl;

    // 4. Capacity
    cout << "Size: " << v1.size() << endl;
    cout << "Capacity: " << v1.capacity() << endl;
    cout << "Is Empty? " << (v1.empty() ? "Yes" : "No") << endl;
    v1.reserve(100);                   // reserve capacity
    cout << "Capacity after reserve(100): " << v1.capacity() << endl;
    v1.shrink_to_fit();               // try to reduce capacity
    cout << "Capacity after shrink_to_fit(): " << v1.capacity() << endl;

    // 5. Iterators
    cout << "Using begin() and end(): ";
    for (auto it = v1.begin(); it != v1.end(); ++it)
        cout << *it << " ";
    cout << endl;

    cout << "Using reverse iterators: ";
    for (auto rit = v1.rbegin(); rit != v1.rend(); ++rit)
        cout << *rit << " ";
    cout << endl;

    // 6. Algorithms
    vector<int> v6 = {5, 3, 1, 4, 2};
    sort(v6.begin(), v6.end());       // sort ascending
    reverse(v6.begin(), v6.end());    // reverse

    cout << "Sorted and reversed vector: ";
    for (int x : v6) cout << x << " ";
    cout << endl;

    // Find and count
    if (find(v6.begin(), v6.end(), 3) != v6.end())
        cout << "3 found!" << endl;
    cout << "Count of 4s: " << count(v6.begin(), v6.end(), 4) << endl;

    return 0;
}
