#include <iostream>
using namespace std;
int tong(int a, int b);
int hieu(int a, int b);
int tich(int a, int b);
float thuong(int a, int b);
<<<<<<< HEAD
int tong(int a, int b){
return a+b;
//da tinh tong
=======
int hieu(int a, int b){
return a-b;
>>>>>>> 85146d1165ef8da95e139738aae9853c041a80ec
}
int tich(int a, int b){
return a*b;
}
int main()
{
	int a, b;
	char phepToan;
	cout << "Nhap so nguyen 1: ";
	cin >> a;
	cout << "Nhap so nguyen 2: ";
	cin >> b;
	cout << "Chon phep toan (+,-) ";
	cin >> phepToan;
	system("pause");
	return 0;
}