#include<iostream>
#include<vector>
using namespace std;

void show(vector<int> s);
int main()
{
	int n;//nλѧ��
	int stu[100];//ѧ������
	vector<int> s1,s2,s3;//1��2��3��ѧ��
	cin>>n;
	for(int i=0;i<n;i++){
	cin>>stu[i];
	}
	for(int i=0;i<n;i++){
		if(i%3==0)s1.push_back(stu[i]);//����1
		else if(i%3==1)s2.push_back(stu[i]);//����2
		else s3.push_back(stu[i]);//����3
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

