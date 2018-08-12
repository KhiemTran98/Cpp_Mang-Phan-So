#include<iostream>
#include"CMangPS.h"
using namespace std;
CMangPS::~CMangPS()
{
	for (int i = 0; i < n; i++)
		delete a[i];
	delete[] a;
}
void CMangPS::Nhap()
{
	cout << "Nhap so phan so: ";
	cin >> n;
	a = new CPhanSo*[n];
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap phan so thu " << i + 1 << endl;
		a[i] = new CPhanSo();
		a[i]->Nhap();
		a[i]->RutGon();
	}
}
CPhanSo* CMangPS::TinhTongCacPSCoTuNhoHonMau()
{
	CPhanSo* kq = new CPhanSo();
	for (int i = 0; i < n; i++)
		if (a[i]->GetTu() < a[i]->GetMau())
			kq = kq->Cong(a[i]);
	return kq;
}