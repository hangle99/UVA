#include <iostream>
#include <vector>
using namespace std;
int UCLN(int a, int b);
vector<int >mang;
int main()
{
	int a;
	while(cin>>a)
	{

		for (int i=a+1; i<= a*2 ; i++)
		{
			int c = i-a;
			int d = i*a;
			int e = UCLN(d,c);
			int tu= (c)/e;
			int mau = (d)/e;
			//cout<<c<<","<<d<<","<<e<<","<<tu<<","<<mau<<endl;

			if (tu == 1)
			{
				mang.push_back(mau);
				mang.push_back(i);
			}
		}
		cout<<mang.size()/2<<endl;
		for (int i= 0; i<= mang.size()-2; i+=2)
			cout<<"1/"<<a<<" = "<<"1/"<<mang[i]<<" + "<<"1/"<<mang[i+1]<<endl;
		mang.clear();
	}
	
}
int UCLN(int a, int b)
{
	if (b == 0)
		return a;
	return UCLN(b, a%b);
}
