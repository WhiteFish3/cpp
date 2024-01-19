#include<iostream>
#include <string>
#include<vector>
using namespace std;
int main()
{
	vector<int> v1;
	vector<int> v2(10);
	vector<int> v3(10,42);
	vector<int> v4{10};
	vector<int> v5{10,42};
	vector<string> v6{10};
	vector<string> v7{10,"hi"};
	cout<<"v1="<<sizeof(v1)<<endl;
	cout<<"v1="<<sizeof(v2)<<endl;
	cout<<"v1="<<sizeof(v3)<<endl;
	cout<<"v1="<<sizeof(v4)<<endl;
	cout<<"v1="<<sizeof(v5)<<endl;
	cout<<"v1="<<sizeof(v6)<<endl;
	cout<<"v1="<<sizeof(v7)<<endl;
}
