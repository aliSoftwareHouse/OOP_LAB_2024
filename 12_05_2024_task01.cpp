#include <iostream>
using namespace std;

class mathematics {
public:
	int a =10;
	void operator++() {
		++a;
	}
//
//	void operator++(int) {
//		a--;
//	}

mathematics operator++(int) {
		mathematics obj;
		return obj;
	}
	void operator--() {
		a--;
	}

	void display() {
		cout << "A: " << a << endl;
	}
};

int main() {
	mathematics op;
	++op;
	op.display();
}
