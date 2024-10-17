#include <iostream>
using namespace std;

class person {
private:
	string name;
	int age;
public:
	void setName(string n) {
		name = n;
	};
	string getName() {
		return name;
	};
	void setAge(int a) {
		if (a > 0) {
			age = a;
		}else{
			cout << "Invalide Age\n";
		}
	};
	int getAge() {
		return age;
	}
};

int main() {
	person p1;
	p1.setAge(10);
	p1.setName(" Ali ");
	cout << "Name " << p1.getName() << endl;
	cout << "Age " << p1.getAge()<<endl;
}
