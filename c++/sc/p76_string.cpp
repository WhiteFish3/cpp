#include<iostream>
#include<string>
using std::string;
using std::cin;
using std::cout;
using std::endl;
int main()
{
	string s1;
	string s2=s1;//s2(s1)直接初始化
	string s3="hi";//拷贝初始化
	string s4(10,'c');
	cin>>s1;
	cout<<s1<<endl;
	cout<<s4.size()<<endl;
	return 0;
}
