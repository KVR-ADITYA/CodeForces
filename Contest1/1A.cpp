#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(int argc, char const *argv[])
{
	ll n,m,a;	cin>>n>>m>>a;
	cout<<((n+a-1)/a)*((m+a-1)/a)<<endl;	return 0;
}