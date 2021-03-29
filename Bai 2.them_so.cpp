//Bài 2: Cho 1 dãy số nguyên. Viết chương trình thêm phần tử 0 vào trước các số hoàn thiện
#include<iostream>
#define MAX 100
using namespace std;
void nhap_sl(int &n);
void nhap_mang(int a[], int n);
bool so_hoan_thien(int m);
void them_mang(int a[], int& n, int vt, int x);
void them_mang2(int a[], int& n,int x);
void xuat_mang(int a[], int n);
int main() {
	int n;
	int x = 0;
	int a[MAX];
	nhap_sl(n);
	nhap_mang(a, n);
	them_mang2(a, n,x);
	xuat_mang(a, n);
	system("pause");
	return 0;
}
void nhap_sl(int &n) {
	do {
		cout << "Nhap so luong phan tu cua mang la : ";
		cin >> n;
	} while (n < 1 || n>MAX);
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
bool so_hoan_thien(int m) {
	int sum = 0;
	for (int i = 1; i < m; i++) {
		if (m % i == 0) { sum += i; }
	}
	if (sum == m) { return true; }
	else { return false; }
}
void them_mang(int a[], int& n,int vt,int x) {
	if (n == MAX) {
		cout << "Mang da dat toi da khong the them nua";
		return;
	}
	for (int i = n; i > vt; i--) {
		a[i] = a[i - 1];
	}
		a[vt] = x;
		n++;
}
void them_mang2(int a[],int &n,int x) {
	for (int i = 0; i < n; i++) {
	
		if (so_hoan_thien(a[i]) == true) {
			them_mang(a, n, i,x);
			i++;
		}
	}
}

