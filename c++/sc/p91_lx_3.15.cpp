#include<iostream>
#include<string>
#include<vector>//动态数组
using namespace std;
int main()
{
	vector<string> nums;
	string num;
	cout<<"Enter numbers:"<<endl;
	while(getline(cin,num))
	{
		nums.push_back(num);//添加动态数组元素
	}
	cout<<"numbers stored in the vector:"<<endl;
	for(auto i:nums)//i循环次数由nums数组长度决定即编译时确定
	{
		cout<<i<<" ";
	}
	cout<<endl;
	return 0;
}
