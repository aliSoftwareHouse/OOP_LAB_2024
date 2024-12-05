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

//mathematics operator++(int) {
//		mathematics obj;
//		return obj;
//	}

	mathematics operator++(int) {
		mathematics obj = *this;
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












///final

#include <iostream>
using namespace std;

class mathematics {
public:
	int a =10;
	mathematics operator++() {
		++a;
		return *this;
	}
	mathematics operator++(int) {
		mathematics obj = *this;
		++a; ;
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
	mathematics op1;
	mathematics op2 = ++op2;


}
