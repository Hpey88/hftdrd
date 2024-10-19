#include <bits/stdc++.h>
using namespace std;
int c[100005];
int main()
{
    ifstream inp("NHAP.INP");
	ofstream out("XUAT.OUT");
	int n;
	inp>>n;
	for (int i=0; i<n; i++)
	{
		inp>>c[i];
	}
	
	sort (c,c+n);
	for (int i=0; i<n; i++)
	{
		if (c[i]%2==0)
		{
			out<<c[i]<<" ";
		}
	}
	
	sort (c,c+n);
    for (int i=0; i<n; i++)
    {
    	if (c[i]%2!=0)
    	{
    		out<<c[i]<<" ";
		}
	}
	
	return 0;
	
	
}
