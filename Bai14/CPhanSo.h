class CPhanSo
{
private:
	int Tu, Mau;
public:
	CPhanSo();
	~CPhanSo();
	void Nhap();
	void Xuat();
	void RutGon();
	CPhanSo* Cong(CPhanSo* x);
	int GetTu();
	int GetMau();
};