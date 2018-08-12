#include<iostream>
#include"CPhanSo.h"
#include"CDungChung.h"
using namespace std;
CPhanSo::CPhanSo()
{
	Tu = 0;
	Mau = 1;
}
CPhanSo::~CPhanSo() {}
void CPhanSo::Nhap()
{
	cout << "Nhap tu: ";
	cin >> Tu;
	cout << "Nhap mau: ";
	cin >> Mau;
}
void CPhanSo ::Xuat()
{
	cout << Tu << "/" << Mau;
}
void CPhanSo::RutGon()
{
	int UCLN = TimUCLN(Tu, Mau);
	Tu = Tu / UCLN;
	Mau = Mau / UCLN;
	if (Mau < 0)
	{
		Tu *= -1;
		Mau *= -1;
	}
}
CPhanSo* CPhanSo::Cong(CPhanSo* x)
{
	CPhanSo* Tong = new CPhanSo();
	Tong->Tu = this->Tu * x->Mau + x->Tu * this->Mau;
	Tong->Mau = this->Mau * x->Mau;
	Tong->RutGon();
	return Tong;
}
int CPhanSo::GetTu()
{
	return Tu;
}
int CPhanSo::GetMau()
{
	return Mau;
}