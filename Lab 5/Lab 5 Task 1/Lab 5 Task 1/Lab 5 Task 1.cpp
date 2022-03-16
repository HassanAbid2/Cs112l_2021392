#include <iostream>
using namespace std;

class heater {

public:
	int temp;

	heater() {
		temp = 15;
	};
};

heater h;

int temphot() {

	h.temp += 5;

	return h.temp;
}

int tempcool() {

	h.temp -= 5;

	return h.temp;
}




int main() {

	cout << "\nTemperature= " << h.temp;

	char x;
	while (1) 
	{
		cout << "\nPress (h) if temperature is warmer and (c) if its cooler: ";
		cin >> x;


		switch (x) {

		case 'h':
			temphot();
			cout << "\nTemp= " << h.temp;
			break;

		case 'c':
			tempcool();
			cout << "\nTemp= " << h.temp;
			break;


		default:
			cout << "\nThe charecter is not valid";
		}

		
	}

	return 0;
}