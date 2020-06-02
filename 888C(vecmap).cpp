/* (: Sreejith Codes :) */

#include    <bits/stdc++.h>

#define 	ll 	long long
#define 	ld 	long double
#define 	pb 	push_back
#define 	ff 	first
#define 	ss 	second
#define 	mp 	make_pair
#define 	mod 	1000000007
#define 	pi 	3.141592653589793
#define     MaxN    LLONG_MAX
#define     MinN    LLONG_MIN

using namespace std;

int main()
{
    vector < ll > v2;
    map < char , vector < ll > > m;
    string s;
    cin>>s;
    ll n=s.size();
    s='$'+s;
    for ( ll i = 1 ; i <= n ; i++ )
            m[s[i]].pb(i);
            
    map < char , vector < ll >  >::iterator it;
    for ( it=m.begin() ; it!= m.end() ; it++ )
    {
        vector < ll >::iterator it1;
        vector < ll >v;

        it1=m[it->ff].begin();
        v.pb(*it1);

        for ( it1=m[it->ff].begin() ; it1!=m[it->ff].end()-1; it1++ )
            v.pb(*(it1+1)-*it1);

        it1=m[it->ff].end()-1;
        v.pb(n-*it1+1);

        sort(v.begin(),v.end());
        ll si=v.size()-1;
        v2.pb(v[si]);
    }

    sort(v2.begin(),v2.end());
    cout<<v2[0];
    return 0;
}
