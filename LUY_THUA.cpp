#include<iostream>
#include<map>
using namespace std;
#define ll long long
map<ll,ll> m;
void solve(ll n)
{
	int k = 2;
	if(n < 2)return ;
	while(n != 1)
	{
		while(n % k != 0) k ++;
		int d = 0;
		while(n % k == 0)
		{
			n /= k ;
			d++;
		}
		m[k] += d;
	}
}

ll gcd(ll a, ll b)
{
	while(b)
	{
		swap(a,b);
		b%= a;
	}
	return a;
}
int main()
{
	ll  a,b,c;
	cin >> a >> b >> c;
	int so_mu = 0;
	solve(a);
	solve(b);
	solve(c);
	for(auto x : m)
	{
		if(so_mu == 0) so_mu = x.second;
		else if(gcd(so_mu,x.second) == 1)
		{
			cout<<1;
			return 0;
		}
		else so_mu = gcd(x.second, so_mu);
	}
	cout<<so_mu;
}
