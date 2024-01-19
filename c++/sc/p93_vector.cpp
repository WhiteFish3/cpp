#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<unsigned> v(11,0);
	unsigned n;
	while(cin>>n)
	{
		if(n<=100)
			++v[n/10];
	}
	int i=0;
	for(auto &i:v)
		cout<<i<<" ";
	cout<<endl;
	return 0;
}
