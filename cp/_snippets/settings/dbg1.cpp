#include <bits/stdc++.h>
using namespace std;

#define DEBUG

#ifdef DEBUG
#define dbg(...) debug_helper(#__VA_ARGS__, __VA_ARGS__)
#else
#define dbg(...)
#endif

// Convert various types to string
template <typename T>
string to_string(T val)
{
    ostringstream oss;
    oss << val;
    return oss.str();
}

// Helper function to pair variable names with their values
template <typename T>
string pair_name_value(const char *name, T &&value)
{
    return string(name) + " = " + to_string(forward<T>(value));
}

template <typename... Args>
void debug_helper(const char *names, Args &&...args)
{
    stringstream ss(names);
    string name;
    size_t i = 0;
    vector<string> tokens;
    while (getline(ss, name, ','))
    {
        tokens.push_back(name);
    }
    cerr << "[";
    size_t j = 0;
    ((cerr << tokens[j++] << " = " << to_string(args) << (j < sizeof...(args) ? ", " : "")), ...);
    cerr << "]" << endl;
}

int add(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}

int main()
{
    int a = 5, b = 3, c = 7;
    dbg(a);                            // This will print: [a = 5]
    dbg(b);                            // This will print: [b = 3]
    dbg(a + b);                        // This will print: [a + b = 8]
    dbg(a, b);                         // This will print: [a = 5, b = 3]
    dbg(a, b, c);                      // This will print: [a = 5, b = 3, c = 7]
    dbg(add(a, b), b);                 // This will print: [add(a, b) = 8, b = 3]
    dbg(add(a, add(b, c)), sub(a, b)); // This will print: [add(a, add(b, c)) = 15, sub(a, b) = 2]
    return 0;
}
