#include<bits/stdc++.h>

using namespace std;

// Define operator<< for printing arrays
template<typename T, size_t N>
ostream& operator<<(ostream& os, const T(&arr)[N]) {
    os << "[";
    for (size_t i = 0; i < N; ++i) {
        if (i != 0) os << ", ";
        os << arr[i];
    }
    os << "]";
    return os;
}

// Define operator<< for printing vectors
template<typename T>
ostream& operator<<(ostream& os, const vector<T>& vec) {
    os << "[";
    for (size_t i = 0; i < vec.size(); ++i) {
        if (i != 0) os << ", ";
        os << vec[i];
    }
    os << "]";
    return os;
}

// Define operator<< for printing maps
template<typename K, typename V>
ostream& operator<<(ostream& os, const map<K, V>& m) {
    os << "{";
    for (const auto& pair : m) {
        os << pair.first << ": " << pair.second << ", ";
    }
    os << "}";
    return os;
}

// Define operator<< for printing sets
template<typename T>
ostream& operator<<(ostream& os, const set<T>& s) {
    os << "{";
    for (const auto& elem : s) {
        os << elem << ", ";
    }
    os << "}";
    return os;
}

// Define operator<< for printing pairs
template<typename T1, typename T2>
ostream& operator<<(ostream& os, const pair<T1, T2>& p) {
    os << "(" << p.first << ", " << p.second << ")";
    return os;
}

// Your debugging function
template<typename... Args>
void dbg(Args&&... args) {
    ((cerr << args << " "), ...);
}

int32_t main() {
    int x = 10;
    double y = 3.14;
    string z = "hello";
    vector<long long> vec = { 1, 2, 3 };
    map<string, long long> myMap = { {"a", 1}, {"b", 2} };
    set<long long> mySet = { 1, 2, 3 };
    multiset<long long> myMultiset = { 1, 2, 2, 3 };
    long long arr[5] = { 1, 2, 3, 4, 5 };
    pair<long long, double> p = { 10, 3.14 };

    dbg(x, y, z, vec, myMap, mySet, myMultiset, arr, p);

    return 0;
}
