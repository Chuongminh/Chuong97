// test_.cpp : Defines the entry point for the console application.
//
/*
#include "stdafx.h"
#include <iostream>
using namespace std;
unsigned int  a =0xF0;

int tinh_tong(int a)
{
	int S =0;
	for (int i=0; i< a; i++)
	{
		S += i;
	}
	return S;
}

int _tmain(int argc, _TCHAR* argv[])
{
	int n;
	cout <<"Nhap gia tri n : " << endl;
	cin >> n;
	cout << "Tong cua S(n) = " << tinh_tong(n)<< endl;



	a = (a << 2) &  0xFF;
cout <<"HHHHHH" << endl;
	cout <<(a) <<endl;
	system("pause");
	return 0;
}
*/
/* bai 2
#include "stdafx.h"
#include <iostream>
using namespace std;
unsigned int  a =0xF0;

int tinh_tong(int a)
{
	int S =1;
	for (int i=1; i<= a; i++)
	{
		S += i;
	}
	return S;
}

int _tmain(int argc, _TCHAR* argv[])
{
	int n;
	cout <<"Nhap gia tri n : " << endl;
	cin >> n;
	cout << "Tong cua S(n) = " << tinh_tong(n)<< endl;



	a = (a << 2) &  0xFF;
cout <<"HHHHHH" << endl;
	cout <<(a) <<endl;
	system("pause");
	return 0;
}
*/
//bai 3
/*
#include "stdafx.h"
#include <iostream>
using namespace std;
unsigned int  a =0xF0;

int tinh_tong(int a)
{
	int S =0;
	for (int i=0; i<= a; i++)
	{
		S +=  i*i;
	}
	return S;
}

int _tmain(int argc, _TCHAR* argv[])
{
	int n;
	cout <<"Nhap gia tri n : " << endl;
	cin >> n;
	cout << "Tong cua S(n) = " << tinh_tong(n)<< endl;



	a = (a << 2) &  0xFF;
cout <<"HHHHHH" << endl;
	cout <<(a) <<endl;
	system("pause");
	return 0;
}
*/
//bai 4
/*
#include "stdafx.h"
#include <iostream>
using namespace std;
unsigned int  a =0xF0;

void HT_SoChan(int a)
{
	bool temp =false;
	for (int i=1; i<= a; i++)
	{
		if(i % 2 == 0)
		{
			temp =true;
			cout << i << "\t";
		}
	}
	if(temp != true)
		cout << "Khong co" << endl;
}

int _tmain(int argc, _TCHAR* argv[])
{
	int n;
	cout <<"Nhap gia tri n : " << endl;
	cin >> n;
	HT_SoChan(n);



	a = (a << 2) &  0xFF;
cout <<"HHHHHH" << endl;
	cout <<(a) <<endl;
	system("pause");
	return 0;
}
*/
//bai 5:
/*
#include "stdafx.h"
#include <iostream>
using namespace std;
unsigned int  a =0xF0;

void HT_UocSo(int a)
{
	for (int i=1; i<= a; i++)
	{
		if(a % i == 0)
		{
			cout << i << "\t";
		}
	}
}

int _tmain(int argc, _TCHAR* argv[])
{
	int n;
	cout <<"Nhap gia tri n : " << endl;
	cin >> n;
	HT_UocSo(n);



	a = (a << 2) &  0xFF;
cout <<"HHHHHH" << endl;
	cout <<(a) <<endl;
	system("pause");
	return 0;
}
*/
// bai 6
/*
#include "stdafx.h"
#include <iostream>
using namespace std;


void Tong_UocSo(int a)
{
	int S =0;
	for (int i=1; i<= a; i++)
	{
		if(a % i == 0)
		{
			if(i !=a)
			{
			cout << i << " + ";
			}
			else
			{
				cout << i << " ";
			}
			S = S + i;
		}
	}
	cout << "= " << S << endl;
}

int _tmain(int argc, _TCHAR* argv[])
{
	int n;
	cout <<"Nhap gia tri n : " << endl;
	cin >> n;
	Tong_UocSo(n);
	system("pause");
	return 0;
}

*/
//bai 7
#include "stdafx.h"
#include <iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	int n;
	cout <<"Nhap gia tri n : " << endl;
	cin >> n;
	int temp=0;
	while(n!=0)
	{
		temp =temp*10 + n%10;
		n =n/10;
	}
while(temp!=0)
{
	cout << temp%10 << "\t";
	temp=temp /10;
}
	system("pause");
	return 0;
}