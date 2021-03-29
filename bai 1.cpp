//Bài 1: Cho 1 dãy số nguyên. Viết chương trình xóa các phần tử là số đối xứng.
#include<iostream>
#define MAX 100
using namespace std;
void nhap_slpt(int& n);
void nhap_mang(int a[], int n);
void xuat_mang(int a[], int n);
bool so_doi_xung(int n);
void xoa_mang(int a[], int& n, int vt);
void xoa_so_doi_xung(int a[], int &n);
int main() {
	int n;
	int a[MAX];
	nhap_slpt(n);
	nhap_mang(a, n);
	xoa_so_doi_xung(a, n);
	
	xuat_mang(a, n);
	system("pause");
	return 0;
}
void nhap_slpt(int& n) {
	do {
		cout << "Nhap so luong phan tu cua mang la : ";
		cin >> n;
	} while (n<1 || n>MAX);
}
void nhap_mang(int a[], int n) {
	cout << "\t\t===============NHap Mang==========\n";
	for (int i = 0; i < n; i++) {
		cout << "Nhap mang a[" << i << "] : ";
		cin >> a[i];
	}
}
void xuat_mang(int a[], int n) {
	cout << "\t\t================xuat mang============\n";
	for (int i = 0; i < n; i++) {
		cout << "Phan tu a[" << i << "] : " << a[i] << endl;
	}
	if(n==0){cout<<"mang khong ton tai phan tu nao";}
}
bool so_doi_xung(int n) {
	int n1 = n;
	int sum = 0;
	while (n != 0) {
		sum = sum * 10 + n % 10;
		n = n / 10;
	}
	if (sum == n1) { return true; }
	else { return false; }

}
void xoa_so_doi_xung(int a[], int &n) {
	for (int i = 0; i < n; i++) {
		if (so_doi_xung(a[i]) == true) {
			xoa_mang(a, n, i);
			i--;
		}
	}
}
void xoa_mang(int a[], int &n, int vt) 
{
			for (int i = vt; i < n - 1; i++) {
				a[i] = a[i + 1];
			}
			n--;		
}
