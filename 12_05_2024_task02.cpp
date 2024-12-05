#include <iostream>
using namespace std;

class Math {
public:
	int a;
	Math() {
		a = 0;
	}
	Math operator++() {
		Math temp;
		temp.a = ++a;
		return temp;
	}
	Math operator++(int) {
		Math temp;
		temp.a = a++;
		return temp;
	}
};

int main() {
	Math obj1, obj2;
	obj1 = obj2++;
	cout << obj1.a <<endl;
	cout<<obj2.a;
}
