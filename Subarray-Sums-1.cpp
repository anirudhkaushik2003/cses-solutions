#include <bits/stdc++.h>
using namespace std;
bool binary_search(vector<long long> &v, long long l, long long r, long long x)
{
    long long mid;
    while (l <= r)
    {
        mid = ((l + r) >> 1);
        if (v[mid] == x)
        {
            return true;
        }
        else if (v[mid] > x)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n;
    cin >> n;
    long long x;
    cin >> x;

    vector<long long> v(n);
    for (auto &l : v)
    {
        cin >> l;
    }
    vector<long long> prefix(n);
    prefix[0] = v[0];
    for (long long i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + v[i];
    }
    long long count = 0;
    for (long long i = 0; i < n; i++)
    {
        if (prefix[i] == x || v[i] == x)
        {
            count++;
        }
        else
        {
            if ((i > 0) && (prefix[i] > x) && binary_search(prefix, 0, i - 1,  prefix[i]-x) == true)
            {
                count++;
            }
        }
    }
    cout << count << endl;
}