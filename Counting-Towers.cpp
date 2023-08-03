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
    int n;
    cin >> n;

    long long a_1 = 1;
    long long a_2 = 1;

    long long b_1 = 1;

    for(int i = 2;i <=n;i++)
    {
        a_2 = (((4*a_1)) + (b_1))%(long long )(1e9+7);
        b_1 = ((2*b_1) + (a_1))%(long long )(1e9+7);
        a_1 = a_2;
    }
    cout << ((a_2+b_1)%(long long )(1e9+7)) << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >>t;
    while (t--)
        solve();
}