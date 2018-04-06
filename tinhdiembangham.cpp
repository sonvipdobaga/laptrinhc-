#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;
float dtb(float t, float l, float h )
{
	return (t + l + h)/3;
}

main(){

	float dt, dl, dh, kq;
	string name;
	cout<<"Nhap ten sinh vien:";
	getline(cin, name);
	cout<<"nhap diem toan:";
	cin>>dt;
	cout<<"nhap diem ly:";
	cin>>dl;
	cout<<"nhap diem hoa:";
	cin>>dh;
	kq = dtb(dt, dl , dh);
	cout<<"diem trung binh la:"<<kq<<endl;
	cout<<"Sinh vien:"<<name<<endl;
	if(kq > 8)
	{
		cout<<"xep loai xuat sac";
	}
	if (kq >= 7 && kq <= 8)
	{
		cout <<"xep loai Gioi";
	}
	if (kq >= 6 && kq < 7)
	{
		cout<<"xep loai Kha";
	}
	if(kq >= 5 && kq < 6)
	{
		cout << "xep loai Trung binh";
	}
	if (kq < 5)
	{
		cout<<" xep loai Yeu";
	}
}


