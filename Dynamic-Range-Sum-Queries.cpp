#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define pb push_back
#define mp make_pair
#define pll pair<ll, ll>
#define pii pair<int, int>
#define vi vector<int>

vll segment_tree;

ll find(int node, int node_low, int node_high, int query_low, int query_high)
{
    if (query_low <= node_low && node_high <= query_high)
    {
        return segment_tree[node];
    }
    if (node_high < query_low || query_high < node_low)
    {
        return 0;
    }

    int last_in_left = (node_low + node_high) / 2;
    return find((2 * node), node_low, last_in_left, query_low, query_high) + find((2 * node)+1, last_in_left + 1, node_high, query_low, query_high);
}

void update(int n, int node, ll value)
{
    segment_tree[n + node] = value;
    for (int j = (n + node) >> 1; j >= 1; j >>= 1)
    {
        segment_tree[j] = segment_tree[2 * j] + segment_tree[2 * j + 1];
    }
}

void solve()
{
    int n, q;
    cin >> n >> q;

    vll v(n);
    for (auto &x : v)
    {
        cin >> x;
    }

    while (__builtin_popcount(n) != 1)
    {
        v.pb(0); // make a power of 2 by padding with zeroes
        n++;
    }
    ll a, b;
    int type;
    segment_tree.resize(2 * n);

    for (int i = 0; i < n; i++)
    {
        segment_tree[n + i] = v[i];
    }
    for (int i = n - 1; i >= 1; i--)
    {
        segment_tree[i] = segment_tree[2 * i] + segment_tree[2 * i + 1];
    }

    while (q--)
    {
        cin >> type >> a >> b;
        if (type == 1)
        {
            // update
            a--;
            update(n, a, b);
        }
        else
        {
            // find
            a--, b--;
            cout << find(1, 0, n - 1, a, b) << endl;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}