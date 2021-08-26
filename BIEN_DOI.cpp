#include<iostream>

using namespace std;
#define ll long long

int main()
{
	ll res = 0;
	ll n;
	cin >> n;
	while(n != 1)
	{
		if(n % 6 == 0) n/= 6;
		else n *= 3;
		if(n & 1 && n != 1)
		{
			cout<<-1;
			return 0;
		}
		res ++;
	}
	cout<<res;
}
