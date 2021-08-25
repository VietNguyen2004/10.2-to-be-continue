//Bạnđượccho 2 sốnguyêndương n, k .Hãytìmsốthứ k không chia hếtcho n

#include<iostream>
using namespace std;
#define ll long long

int main()
{
	int t;
	cin >> t;
	ll n , k ;
	for(int i = 1;i <= t;i ++)
	{
		cin >> n >> k ;
		ll c = k / (n-1);
		ll mod = k % (n -1);
		if(mod == 0)
		{
			cout<<n * c - 1<<endl;
		}
		else
		{
			cout<<n * c + mod<<endl;

		}
	}
}
