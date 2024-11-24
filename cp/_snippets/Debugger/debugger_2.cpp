#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define ld long double 
#define endl "\n"
#define ForEach(a, b) for (auto&(a) : (b))
// Concept to check if a type is a container
template <typename T> concept IsContainer = requires(T t) { t.begin(); t.end(); } && !std::is_same_v<T, std::string>;

// Overload for printing containers
template <IsContainer T>
ostream& operator<<(ostream& os, const T& c) {
  os << "[";
  for (auto it = c.begin(); it != c.end(); ++it) {
    if (it != c.begin()) os << ", ";
    os << *it;
  }
  return os << "]";
}

// Specialization for maps
template <typename K, typename V>
ostream& operator<<(ostream& os, const map<K, V>& m) {
  os << "{";
  for (auto it = m.begin(); it != m.end(); ++it) {
    if (it != m.begin()) os << ", ";
    os << it->first << ": " << it->second;
  }
  return os << "}";
}

// Variadic template for dbg function
template <typename... Args>
void dbg(Args&&... args) {
  ((cerr << std::forward<Args>(args) << " "), ...);
  cerr << endl;
}

int32_t main() {
  int x = 10;
  double y = 3.14;
  string z = "hello";
  vector<int> vec = {1, 2, 3, 4, 5};
  map<string, int> myMap = {{"one", 1}, {"two", 2}, {"three", 3}};
  set<int> mySet = {10, 40, 20, 30};

  dbg(x);
  dbg(y);
  dbg(z);
  dbg(vec);
  dbg(myMap);
  dbg(mySet);

  return 0;
}
