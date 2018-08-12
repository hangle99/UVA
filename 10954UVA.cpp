#include <iostream>
#include <queue>
using namespace std;
struct cmp{

bool operator() (int a,int b) {return a>b;}

};
void output();
priority_queue <int,vector<int>,cmp > mypq;

int main()
{

	int n, a;
	while(cin>>n && n!=0)
	{

		for (int i=0; i< n; i++)
		{
			cin>>a;
			mypq.push(a);
		}
		/*for (int i=0; i< n; i++)
		{
			cout<<mypq.top();
			mypq.pop();
		}*/
		output();
	}
}
void output()
{
	int tong = mypq.top();
	mypq.pop();
	int tong2 = 0;
	while (!mypq.empty())
	{
		
		tong+=mypq.top();
		mypq.pop();
		tong2= tong2+ tong;

		cout<<tong2<<", "<<tong<<" ";
	}
	cout<<tong2<<endl;
}