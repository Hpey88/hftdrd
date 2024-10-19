#include <bits/stdc++.h>
using namespace std;
bool cp(int n)
{
	int sqr=sqrt(n);
	if (sqr*sqr==n)
	{
		return true;
	}
	return false;
}

long long c[100001];
int main()
{
	ifstream inp("NHAP.INP");
	ofstream out("XUAT.OUT");
	int n;
	inp>>n;
	bool ellen=false;
	for (int i=0;i <n; i++)
	{
		inp>>c[i];
	}
	
	long long tong=0;
	for (int i=0; i<n; i++)
	{
		if (cp(c[i])==true)
		{
			tong=tong+c[i];
			ellen=true;
		}
	}
    
		if (!ellen)
		{
			out<<"-1";
		}
		else
		{
			out<<tong;
		}
	
	
	
	return 0;
}




