#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define pb push_back
#define mp make_pair
#define pll pair<ll, ll>
#define pii pair<int, int>
#define vi vector<int>

void sub(string &str, int l, int &r, set<string> &lks)
{
    if (l == r)
    {
        lks.insert(str);
        return;
    }

    for (int i = l; i <= r; i++)
    {
        swap(str[l], str[i]); // lth char must be swapped with each character from l to r starting from r and going backwards
        sub(str, l+1, r, lks);
        swap(str[l], str[i]);
    }
}
void solve()
{
    string s;
    cin >> s;
    int n = s.size();

    sort(s.begin(), s.end());
    int l = -1, r = n - 1;
    set<string> lks;
    sub(s, 0, r, lks);
    cout << lks.size() << endl;
    for (auto it : lks)
    {
        cout << it << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}