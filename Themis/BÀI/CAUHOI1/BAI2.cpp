#include <bits/stdc++.h>
using namespace std;

int main()
{
	ifstream inp("NHAP.INP");
	ofstream out("XUAT.OUT");
    string s;
	getline (inp,s); 
    int chuso = 0;
	int  chucai = 0;
    int dacbiet = 0;
  for (char c : s)
  {
        if(isdigit(c))
		{
        	++chuso;    
        }
        else if(isalpha(c)){
            ++chucai;
        }
        else{
            ++dacbiet;
        }
    }    
    out<<chucai<<" "<<chuso<<" "<<dacbiet<<" ";
   
    return 0;
}
