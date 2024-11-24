#include <bits/stdc++.h>
using namespace std;
#define int long long

#define DEBUG
#ifdef DEBUG
#define dbg(...) cerr << "[" << #__VA_ARGS__ << "] = [" << debug_out(__VA_ARGS__) << "]" << endl
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

// Base case for recursion: no arguments
string debug_out()
{
    return "";
}

// Recursive case for variadic templates
template <typename T, typename... Args>
string debug_out(T first, Args... args)
{
    return to_string(first) + (sizeof...(args) ? ", " : "") + debug_out(args...);
}

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}
int32_t main()
{
    int a = 5, b = 3, c = 4;
    dbg(a);            // This will print: [a] = [5]
    dbg(b);            // This will print: [b] = [3]
    dbg(a + b);        // This will print: [a + b] = [8]
    dbg(a + b, b - a); // This will print: [a, b] = [5, 3]
    dbg(add(a, add(b, c)), sub(a, b),a+c);
    return 0;
}
