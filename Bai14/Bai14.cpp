#include<iostream>
#include<conio.h>
#include"CMangPS.h"
using namespace std;
void main()
{
	CMangPS* x = new CMangPS();
	cout << "Nhap mang cac phan so" << endl;
	x->Nhap();
	cout << "\nTong cac phan so co tu < mau: ";
	CPhanSo* Tong = x->TinhTongCacPSCoTuNhoHonMau();
	Tong->Xuat();
	delete x;
	_getch();
}