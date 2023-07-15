#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define pb push_back
#define mp make_pair
#define pll pair<ll, ll>
#define pii pair<int, int>
#define vi vector<int>

void sub(int n, int &src, int &aux, int &dest)
{
    if (n == 1)
    {
        cout << src << " " << dest << endl;
        return;
    }
    sub(n - 1, src, dest, aux);
    cout << src << " " << dest << endl;
    sub(n - 1, aux, src, dest);
}
void solve()
{
    int n;
    cin >> n;
    cout << (1 << n)-1 << endl;
    int src = 1, aux = 2, dest = 3;
    sub(n, src, aux, dest);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}