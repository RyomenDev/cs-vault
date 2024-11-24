#include <bits/stdc++.h>
using namespace std;
#define int long long

using namespace std;

#define int long long
#define ld long double
#define endl "\n"

// Overload for printing std::basic_string<char>
ostream& operator<<(ostream& os, std::basic_string<char>& str) { return os << str.c_str(); }

// Concept to check if a type is a container
template <typename T> concept IsContainer = requires(T t) { t.begin(); t.end(); };
// Overload for printing pairs
template <typename T1, typename T2>
ostream& operator<<(ostream& os, pair<T1, T2>& p) { return os << "(" << p.first << ", " << p.second << ")"; }

// Overload for printing containers
template <IsContainer T>
ostream& operator<<(ostream& os, T& c) {
    os << "["; bool first = true;for (auto& elem : c) { if (!first) os << ", "; os << elem; first = false; }return os << "]";
}

// Specialization for unordered containers
template <typename K, typename V>
ostream& operator<<(ostream& os, unordered_map<K, V>& umap) {
    os << "{";bool first = true;for (auto& pair : umap) { if (!first) os << ", ";os << pair.first << ": " << pair.second;first = false; }
    return os << "}";
}

template <typename T>
ostream& operator<<(ostream& os, unordered_set<T>& uset) {
    os << "{";bool first = true;for (auto& elem : uset) { if (!first) os << ", "; os << elem; first = false; }return os << "}";
}
// Overload for printing deque
template <typename T>
ostream& operator<<(ostream& os, deque<T>& dq) {
    os << "[";bool first = true;for (auto& elem : dq) { if (!first) os << ", "; os << elem; first = false; }return os << "]";
}

// Overload for printing arrays
template <typename T, size_t N>
ostream& operator<<(ostream& os, array<T, N>& arr) {
    os << "["; for (size_t i = 0; i < N; ++i) { if (i != 0) os << ", "; os << arr[i]; } return os << "]";
}

// Variadic template for dbg function
template <typename... Args>
void dbg(Args &&...args) { ((cerr << std::forward<Args>(args) << " "), ...);cerr << endl; }

// Overload for printing custom type MyType
struct MyType {
    int value1; double value2;
    // Define other members and methods as needed , Overload operator<< for MyType
    friend ostream& operator<<(ostream& os, MyType& obj) { os << "{" << obj.value1 << ", " << obj.value2 << "}"; return os; }
};

int32_t main() {
    int x = 10;
    double y = 3.14;
    string z = "hello";
    vector<int> vec = {1, 2, 3, 4, 5};
    map<string, int> myMap = {{"one", 1}, {"two", 2}, {"three", 3}};
    set<int> mySet = {10, 40, 20, 30};
    multiset<int> myMultiSet = {10, 20, 30, 10, 20};
    multimap<string, int> myMultiMap = {{"one", 1}, {"two", 2}, {"one", 3}};
    array<int, 5> myArray = {1, 2, 3, 4, 5};
    deque<int> myDeque = {1, 2, 3, 4, 5};
    dbg(myDeque);

    // Example usage with custom type MyType
    MyType obj = {10, 3.14};
    dbg(obj);

    dbg(x);
    dbg(y);
    dbg(z);
    dbg(vec);
    dbg(myMap);
    dbg(mySet);
    dbg(myMultiSet);
    dbg(myMultiMap);
    dbg(myArray);

    return 0;
}
