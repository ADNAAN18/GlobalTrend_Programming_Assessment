#include<bits/stdc++.h>
using namespace std;
int digitSum(int n)
{
	int sum = 0;
	while(n > 0)
	{
		int d = n % 10;
		sum = sum + d;
		n = n / 10;
    }

    return sum;
}
	
int main()
{
	int n;
	cin>>n;
	int ans = digitSum(n);
	cout<<"Sum of Digits in " <<n<< " is: "<<ans<<endl;
}
