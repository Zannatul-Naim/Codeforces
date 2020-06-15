/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 5010
#define inf 1e9

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d",n)
#define pff(n,m) printf("%d %d",n,m)
#define pffl(n,m) printf("%I64d %I64d",n,m)
#define pfl(n) printf("%I64d",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<int, int>

using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, t;

    set<int> s;
    map<int, int> mp;

    sf(t);
    while(t--)
    {
        sf(n);

        s.clear();
        mp.clear();

        for(i = 0; i < n; i++)
        {
            sf(m);
            s.insert(m);
            mp[m]++;
        }

        // if e is the number that will be in the second set
        int ans = 0;
        for(int e : s)
        {
            // keeping e in both the sets
            ans = max(ans, min(mp[e] - 1, (int)s.size()));

            // keeping e just in the second second
            ans = max(ans, min(mp[e], (int)(s.size() - 1)));
        }

        pf(ans); nl;
    }

    return 0;
}
