#include <bits/stdc++.h>
using namespace  std;
int main()
{
	ifstream inp("NHAP.INP");
	ofstream out("XUAT.OUT");
	long long n;
	inp>>n;
	if ((n%2==0) && (n%5==0))
	{
		out<<"YES";
	}
	else
	{
		out<<"NO";
	}
	
	
	return 0;
}






