#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define pb push_back
#define mp make_pair
#define pll pair<ll, ll>
#define pii pair<int, int>
#define vi vector<int>

void solve()
{
    ll n;
    cin >> n;
    cout << n << " ";
    while (n != 1)
    {
        if ((n & 1 )== 1)
        {
            n = 3 * n + 1;
        }
        else
        {
            n = n >> 1;
        }
        cout << n << " ";
    }
    cout << endl;
}

int main()
{
    solve();
}