#include <stdio.h>
#include <iostream>
	
using namespace std;
int gpt(int a, int b)
{
	if(a == 0 && b == 0)
	{
		return 0;
	}
	else if (a == 0 &&b != 0)
	{
		return -1;
	}
	else
	{
		return -b/a;
	}
}
main()
{
	int a, b;
	float kq;
	cin>>a>>b;
	kq = gpt(b,a);
	if(kq==0)
	{
		cout<<"pt co vo so nghiem";
		
	}
	else if (kq == -1)
	{
		cout << "pt vo nghiem" ;
	}
	else
	{
		cout<<"pt co nghiem la x="<<kq;
	}
}
