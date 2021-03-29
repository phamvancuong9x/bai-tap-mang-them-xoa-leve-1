//Bài 4. Cho mảng 1 chiều các số nguyên.Viết chương trình đếm số lần xuất hiện của từng phần tử trong mảng.
//VD:
//1 3 5 2 3 1
//==>
//Phần tử	Số lần xuất hiện
//1 	2
//2   	1
//3	    2
//5 	1
#include<iostream>
#define MAX 100
using namespace std;
void nhap_sl(int& n);
void nhap_mang(int a[], int n);
void so_lan_xuat_hien(int a[], int n);
int main() {
	int n;
	int a[MAX];
	nhap_sl(n);
	nhap_mang(a, n);
	so_lan_xuat_hien(a, n);
	system("pause");
	return 0;
}
void nhap_sl(int& n) {
	do {
		cout << "Nhap so luong phan tu trong mang : ";
		cin >> n;
	} while (n<1 || n>MAX);
}
void nhap_mang(int a[],int n) {
	for (int i = 0; i < n; i++) {
		cout << "Nhap phan tu a[" << i << "] : ";
		cin >> a[i];
	}
}
void xoa_mang(int a[], int& n, int vt) {
	for (int i = vt; i < n - 1; i++) {
		a[i] = a[i + 1];
	}
	n--;
}
void so_lan_xuat_hien(int a[],int n) {
	cout << "Phan tu"<<"       "<<" so lan xuat hien\n";
	int dem = 1;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] == a[j]) { 
				xoa_mang(a, n, j);
				j--;
				dem++; }
		}
		cout << "   " << a[i] << "             " << dem << endl;
		dem = 1;
	}
}