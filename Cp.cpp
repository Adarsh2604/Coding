#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1e9 + 7;
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define alg(a) a.rbegin(), a.rend()
#define fo(i, n) for (int i = 0; i < n; i++)
#define getunique(v)                     \
    {                                    \
        sort(al(v));                     \
        v.erase(unique(al(v)), v.end()); \
    }
#define input(a, n)             \
    for (int i = 0; i < n; i++) \
    cin >> a[i]
#define print(a)           \
    for (auto it : a)      \
    {                      \
        cout << it << " "; \
    }                      \
    cout << endl
#define sll set<long long>
#define msll multiset<long long>
#define inmap(x, mymap) mymap.find(x) != mymap.end()
#define mll map<ll, ll>
#define mmll multimap<ll, ll>
#define uset unordered_set<ll>
#define lb lower_bound
#define ub upper_bound
#define Inf 1e18
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define add(a, b, c) a % mod + b % mod + c % mod
#define sub(a, b) mod + a % mod - b % mod
#define mult(a, b, c) ((a % mod) * (b % mod) * (c % mod)) % mod

#define setbits(a) (__builtin_popcountll(a)) // to count 1 bits
#define right(a) (__builtin_ctzll(a))        // to count trailing 0s
#define left(a) (__builtin_clzll(a))         // to count leading 0s
#define parity(a) (__builtin_parityll(a))    // to check even odd
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define iterate(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
class UnionFind
{
private:
    vector<int> root, rank, size;

public:
    UnionFind(int sz) : root(sz), rank(sz), size(sz)
    {
        for (int i = 0; i < sz; i++)
        {
            root[i] = i;
            rank[i] = 1;
            size[i] = 1;
        }
    }

    int find(int x)
    {
        if (x == root[x])
            return x;
        root[x] = find(root[x]);
    }

    void unionSet(int n1, int n2)
    {
        int rootX = find(n1);
        int rootY = find(n2);
        if (rootX != rootY)
        {
            if (rank[rootX] > rank[rootY])
            {
                root[rootY] = rootX;
            }
            else if (rank[rootX] < rank[rootY])
            {
                root[rootX] = rootY;
            }
            else
            {
                root[rootY] = rootX;
                rank[rootX] += 1;
            }
        }
    }

    void unionSetBySize(int n1, int n2)
    {
        int rootX = find(n1);
        int rootY = find(n2);
        if (rootX != rootY)
        {
            if (size[rootX] < size[rootY])
            {
                size[rootX] += size[rootY];
                root[rootY] = rootX;
            }
            else
            {
                size[rootY] += size[rootX];
                root[rootX] = rootY;
            }
        }
    }

    bool connected(int n1, int n2)
    {
        return find(n1) == find(n2);
    }
};

class solution
{
private:
public:
    void solve()
    {
        
};

int main()
{
    IOS;
    solution ob;
    int t;
    cin >> t;
    while (t--)
    {
        
        ob.solve();
    }
    // ob.solve();
    
}