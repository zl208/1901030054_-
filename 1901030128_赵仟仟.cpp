#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int n,a[3][100];
	cin >> n;
	int cnt = 0;
	cnt = n/3;
	if(n % 3 != 0)
		cnt++;
	int num = 0;
	for(int i = 1; i <= cnt; i++){
		for(int j = 1; j <= 3; j++){
			if(num++ > n+1)
				break;
			scanf("%d",&a[j][i]);
//			cout << num << endl;
		}
	}
	num = 0;
	for(int i = 1; i <= 3; i++){
		for(int j = 1; j <= cnt; j++){
			if(num++ > n+1)
				break;
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	return 0;
 } 
