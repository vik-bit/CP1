#include <bits/stdc++.h>
 
using namespace std;
 
#define ll     long long
#define _test   int _TEST; cin>>_TEST; while(_TEST--)
#define pb     push_back
#define ppb    pop_back
#define pf     push_front
#define ppf    pop_front
 
int main()
{
    _test
    {
        ll int n, k;
        cin>>n>>k;
 
        deque<ll int> dq;
 
        for(int i=0, x; i<n; i++)
        {
            cin>>x;
            dq.pb(x);
        }
 
        int f=1, ans=0;
 
        while(k>0 && dq.size())
        {
            if(dq.size() == 1)
            {
                if(dq.front() <= k)
                    ans++;
 
                break;
            }
 
            int x = dq.front();
            int y = dq.back();
 
            dq.ppf(), dq.ppb();
 
            int z = min(x, y);
 
            if(f == 1)
            {
                if(z == x)
                {
                    if(k < 2*z-1)       break;
 
                    k -= 2*z-1;
                    y -= z-1;
                    f = 0;
                    dq.pb(y);
                    ans++;
                }
                else
                {
                    if(k < 2*z)         break;
 
                    k -= 2*z;
                    x -= z;
                    dq.pf(x);
                    ans++;
                }
            }
            else
            {
                if(z == y)
                {
                    if(k < 2*z-1)       break;
 
                    k -= 2*z-1;
                    x -= z-1;
                    f = 1;
                    dq.pf(x);
                    ans++;
                }
                else
                {
                    if(k < 2*z)         break;
 
                    k -= 2*z;
                    y -= z;
                    dq.pb(y);
                    ans++;
                }
            }
        }
 
        cout<<ans<<"\n";
    }
}
