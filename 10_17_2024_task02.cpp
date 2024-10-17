#include <iostream>
using namespace std;

class bankAccount {
private:
	double balance;
public:
	bankAccount() {
		balance = 0;
	}
	bankAccount(double initial_balance) {
		if(initial_balance>0){
			balance = initial_balance;
		}
		else {
			cout << "Invalid Input\n";
		}
	}
	void display() {
		cout << "Balance is " << balance<<endl;
	}

	void deposit(double amount) {
		if (amount > 0) {
			balance += amount;
		}
		else {
			cout << "Invalid input\n";
		}
	}

	void withdraw(double amount) {
		if (amount > 0 && amount <balance) {
			balance -= amount;
		}
		else {
			cout << "Invalid input\n";
		}
	}
};

int main() {
	bankAccount b1(10000);
	b1.display();
	b1.deposit(10000);
	b1.display();
	b1.withdraw(3000);
	b1.display();

}
