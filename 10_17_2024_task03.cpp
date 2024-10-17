#include <iostream>
using namespace std;

class bankAccount {
public:
	double balance;
	bankAccount() {
		balance = 10000;
	}
	bankAccount(bankAccount &B1) {
		balance = B1.balance + 900;
	}

};

int main() {
	bankAccount A1;
	cout << A1.balance<<endl;
	bankAccount A2 = A1;
	cout << A2.balance;
}
