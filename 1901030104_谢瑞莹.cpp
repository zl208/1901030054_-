#include<iostream>
#include<vector>
using namespace std;

void show(vector<int> s);
int main()
{
	int n;//n位学生
	int stu[100];//学生数组
	vector<int> s1,s2,s3;//1，2，3排学生
	cin>>n;
	for(int i=0;i<n;i++){
	cin>>stu[i];
	}
	for(int i=0;i<n;i++){
		if(i%3==0)s1.push_back(stu[i]);//报数1
		else if(i%3==1)s2.push_back(stu[i]);//报数2
		else s3.push_back(stu[i]);//报数3
	}
	show(s1);
	show(s2);
	show(s3);
	return 0;
}
void show(vector<int> s)
{
	for(int i=0;i<s.size();i++){
		cout<<s[i];
		if(i==s.size()-1) cout<<endl;
		else cout<<" ";
	}
}

