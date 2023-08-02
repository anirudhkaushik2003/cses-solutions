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
// recursive range update
// void update(int node, int node_low, int node_high, int query_low, int query_high, int value)
// {
//     if (query_low <= node_low && node_high <= query_high)
//     {
//         segment_tree[node] += value; // leaf node case
//     }

//     int last_in_left = (node_low + node_high) >> 1;

//     update(2 * node, node_low, last_in_left, query_low, query_high, value);
//     update((2 * node) + 1, node_low, last_in_left, query_low, query_high, value);

//     segment_tree[node] = segment_tree[2 * node] + segment_tree[2 * node + 1];
// }

void solve()
{
    int n;
    cin >> n;

    for(int i = 2; i<= n;i+=2)
    {
        cout<<i<<" ";
    }
    int first=1, second = 3;
    if((n&1) == 0)
    {
        first = 3;
        second =1;
    }
    for(int i = first; i<= n;i+=4)
    {
        cout << i << " ";
    }
    if((n&1) && (n-first)%4 == 0)
    {
        for(int i = )
    }
    else{for(int i = second; i<= n;i+=4)
    {
        cout << i << " ";
    }}
    cout << endl;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}