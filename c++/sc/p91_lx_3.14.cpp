#include<iostream>
#include<vector>//动态数组
using namespace std;
int main()
{
	vector<int> nums;
	int num;
	cout<<"Enter numbers:"<<endl;
	while(cin>>num)
	{
		nums.push_back(num);//添加动态数组元素
	}
	cout<<"numbers stored in the vector:"<<endl;
	for(int i:nums)//i循环次数由nums数组长度决定即编译时确定
	{
		cout<<i<<" ";
	}
	cout<<endl;
	return 0;
}
