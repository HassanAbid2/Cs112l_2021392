#include<iostream>
using namespace std;

class parity {

private:

	int arr;
	int* r;

public:

	parity(int size = 1)
	{
		arr = size;
		r = new int[size];

		for (int i = 0; i < size; i++)
			r[i] = i;

		r[0] = 1;
	}

	void put(int num1) {

		arr++;

		int* temp = new int[arr];
		for (int i = 0; i < arr - 1; i++)
			temp[i] = r[i];
		temp[arr - 1] = num1;      //arr-1 is index
		r = temp;
	}

	void print() {

		cout << "[ ";

		for (int i = 0; i < arr; i++)
		{
			cout << r[i] << " ";
		}
		cout << "]";
	}
	

	void del(int num2) {

		if (arr <= 1)
		{
			cout << "Cannot be deleted!";
			return;
		}

		arr--;

		int* temp1 = new int[arr];

		for (int i = 0; i < arr; i++)
			temp1[i] = r[i];

		r = temp1;

	}

	int test() {

		if (arr % 2 == 0)
			return 1;
		else
			return 0;

	}

};

int main() 
{

	parity p;
	int num;

	do {
			cout << "\n\n  |Main menu|\n\n";
			cout << "1. Input values.\n";
			cout << "2. Print the values.\n";
			cout << "3. Delete.\n";
			cout << "4. Test.\n";

			cout << "\nEnter desired option: ";
			cin >> num;

			switch (num) {

			case 1:
				int x;
				cout << "Enter a new number: ";
				cin >> x;

				p.put(x);

				break;

			case 2:

				p.print();
				break;

			case 3:
				int y;

				cout << "\nEnter element you want to delete:";
				cin >> y;

				p.del(y);
				break;


			case 4:

				if (p.test() == 1) {
					cout << "|TRUE|";
				}
				else
					cout << "|FALSE|";

			default:
				cout << "Invalid entry XD";
			}
	} while (1);




	return 0;
}