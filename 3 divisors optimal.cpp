#include <bits/stdc++.h>

using namespace std;

void sieve(int n)
{
    int root = sqrt(n);
    bool isprime[root + 1];
    memset(isprime, true, sizeof(isprime));

    for (int i = 2; i * i <= root; i++)
    {
        if (isprime[i])
        {
            for (int j = i * i; j <= root; j = j + i)
            {
                isprime[j] = false;
            }
        }
    }
    int cnt = 0;
    for (int i = 2; i <= root; i++)
    {
        if (isprime[i])
            cnt++;
    }
    cout << cnt << "\n";
}

void solve()
{
    int n;
    cin >> n;
    sieve(n);
}

int32_t main()
{
    int test;
    cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}
