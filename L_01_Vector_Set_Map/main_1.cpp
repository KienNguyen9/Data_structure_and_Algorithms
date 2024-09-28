// #include <bits/stdc++.h>
#include <vector>
#include <iostream>

using namespace std; 

// using ll = long long;

/**
 * @C++ : STL
 * It's a strong library for Algorithms programming
 *  Vector, Set, Map, Queue, Stack,...
 *  Sort, Search, Lower,...
 * 
 *  STL là thư viện mạnh mẽ, cung cấp đầy đủ các phương thức xử lí dữ liệu tối ưu nhất
 *  
 * @return int 
 */

int main() 
{
    vector<int> v;
    
    v.push_back(1); // 1 
    v.push_back(2); // 1 2 
    v.push_back(3); // 1 2 3
    v.push_back(4); // 1 2 3 4
    v.push_back(5); // 1 2 3 4 5
    v.emplace_back(99); // 1 2 3 4 5 99

    cout << v.size()<< endl;  // = 6 
    
    cout << v.at(5) << endl;

    // For loop
    for(int i = 0; i < v.size(); i++){
        cout << v.at(i) << "\n";
    }

    // Range base for loop 
    for (int x : v) {
        cout << x << "\n";
    }
    return 0;
}