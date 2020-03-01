//calculate sin(x) and cos(x) with taylor series start with f(0)
#include <iostream>
using namespace std;

#define PIE 3.141592653
#define MIN 0.0000001
#define PREC 100
int main() {
	double x;
	cin >> x;
	x = x*PIE/180;
	cout << sin(x);
	cout << '\n';
	cout << cos(x);
	getchar();
	getchar();

}
double sin(double x) {

	double res = 0;
	int level = 1;
	int sign = 1;
	while (level<PREC) {
		double a = 1;
		for (int i = level; i > 0; i--) {
			a *= x / i;
		}
		res += sign * a;
		sign *= -1;
		level += 2;
	}
	if (res < MIN && res > -MIN)
		res = 0;
	return res;

};
double cos(double x) {

	double res = 0;
	int level = 0;
	int sign = 1;
	while (level<PREC) {
		double a = 1;
		for (int i = level; i > 0; i--) {
			a *= x / i;
		}
		res += sign * a;
		sign *= -1;
		level += 2;
	}
	if (res < MIN && res > -MIN)
		res = 0;
	return res;

};
