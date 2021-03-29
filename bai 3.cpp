//Bài 3. Cho mảng 1 chiều các số nguyên. Viết chương trình xóa các phần tử trùng nhau trong mảng, chỉ giữ lại duy nhất một phần tử phân biệt.
//VD: 1 4 2 2 1 5 4
//==> 1 4 2 5
#include<iostream>
#define MAX 100
using namespace std;
void nhap_sl(int &n);
void nhap_mang(int a[], int n);
void xuat_mang(int a[], int n);
void xoa_mang(int a[], int& n, int vt);
void xoa_trung_nhau(int a[], int& n);
int main() {
	int n;
	int a[MAX];
	nhap_sl(n);
	nhap_mang(a, n);
	xoa_trung_nhau(a, n);
	xuat_mang(a, n);
	system("pause");
	return 0;
}
void nhap_sl(int &n) {
	do {
		cout << "Nhap so luong phan tu cua mang : ";
		cin >> n;
	} while (n<1 || n>MAX);
}
void nhap_mang(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "Nhap phan tu a[" << i << "] : ";
		cin >> a[i];
	}
}
void xuat_mang(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "Phan tu a[" << i << "] : " << a[i] << endl;
	}
}
void xoa_mang(int a[], int& n, int vt) {
	for (int i = vt; i < n - 1; i++) {
		a[i] = a[i + 1];
	}
	n--;
}
void xoa_trung_nhau(int a[], int& n) {
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] == a[j]) {
				xoa_mang(a, n, j);
				j--;
			}
		}
	}
}