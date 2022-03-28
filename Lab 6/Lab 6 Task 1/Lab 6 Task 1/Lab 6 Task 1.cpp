#include <iostream>
#include<string>
using namespace std;

class person {
private:

	string uni, comp;

public:

	friend class coordinator;

};


class coordinator {

public:

	person p1, p2;
	int lenght1 = 0, lenght2 = 0;

	coordinator() {

		cout << "\nEnter copmetition and university name: ";
		cin >> p1.comp >> p1.uni;

		cout << "\n\nEnter copmetition and university name: ";
		cin >> p2.comp >> p2.uni;
	}

	int room() {

		if (p1.uni == p2.uni)
			return 1;

		else
			return 0;
	}

	int allot() {

		int a, b;

		a = p1.comp.length();
		b = p2.comp.length();

		if (a == b)
			return a;

		else if (a > b)
			return a;

		else
			return b;

	}

};



int main() {
	int a, b;
	coordinator c;

	if (c.room()) {

		a = c.allot();

		cout << "\nMessage from the coordinator Person1 and Person2 are roommates, and the room number is " << a;
	}
	else
		cout << "\nMessage from the coordinator Person1 and Person2 are not roommates :(";



	return 0;
}