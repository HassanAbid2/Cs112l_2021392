#include <iostream>
#include <string>

using namespace std;


class stringType {
	
public:

	string str1, str2;

	void setValues(string s1, string s2) {

		str1 = s1;
		str2 = s2;

	}

	void printValues(){

		cout<<"\nThe value of string 1 is: " << str1;
		cout <<"\nThe value of string 2 is:" << str2;

	}


	int maxLength() {

		int i;
		for (i = 0; str1[i] != '\0'; i++);

		int j;
		for (j = 0; str2[j] != '\0'; j++);

		if (i >= j)
			return i;
		else
			return j;

	}

	int compare(string s1, string s2) {

		int i = 0;

		while (1) {

			if (s1[i] > s2[i])
				return 1;
			else if (s1[i] < s2[i])
				return -1;

			i++;
		}

		return 0;
	}


	void copy() {

		int i;

		for (i = 0; str1[i]!='\0'; i++)

			str1[i] = str2[i];

		for (i = str2[i]; str2[i]!=0; i++)
		{
			str1[i] = ' ';
		}

	}


	string concatenate(string s1, string s2) {

		return (s1 + s2);

	}
	
	int searchWord(string word)
		{
			int wrd;
			for (wrd = 0; word[wrd] != '\0'; wrd++);

			for (int i = 0; str1[i] != '\0'; i++)
			{
				if (str1[i] == word[0])
				{
					if (wrd == 1)
						return 1;

					for (int j = 1; j < wrd; j++)
					{
						if (word[j] != str1[i + j])
							break;
						if (j == (wrd - 1))
							return 1;
					}
				}
			}

			return 0;
		}


	int searchChar(char ch) {

		for (int i = 0; str1[i] != '\0'; i++)
		{
			if (str1[i] == ch)
				return 1;
		}

		return 0;

	}


};


void menu(stringType s) {

	int x;

	cout << "\n\n   |Main menu|"
		<< "\n (1) Set string values."
		<< "\n (2) Print values."
		<< "\n (3) Max lenght."
		<< "\n (4) Compare."
		<< "\n (5) Copy."
		<< "\n (6) Concatinate."
		<< "\n (7) Search word."
		<< "\n (8) search charecter."
		<< "\n\n Enter your desired option: ";

	cin >> x;


	switch (x) {

	case 1:
	{
		string s1, s2;

		cout << "\nEnter value for string 1: ";
		cin.ignore();
		getline(cin, s1);

		cout << "Enter value for string 2: ";
		getline(cin, s2);

		s.setValues(s1, s2);

		menu(s);

		break;
	}
	case 2:

		s.printValues();

		menu(s);

		break;

	case 3:

		cout <<"\nMax lengt is: "<<s.maxLength();

		menu(s);

		break;

	case 4:

		if (s.compare(s.str1, s.str2) == -1) {
			cout << "\nString 2 is greater";
		}
		else if (s.compare(s.str1, s.str2) == 1) {
			cout << "\nString 1 is greater";
		}
		else if (s.compare(s.str1, s.str2) == 0) {
			cout << "\nBoth are equal";
		}

		break;

	case 5:

		s.copy();

		cout << "\nThe strings have been copied sucessfully!";

		menu(s);

		break;

	case 6:

		s.concatenate(s.str1, s.str2);

		cout << "\nThe strings have been concatinated!";

		break;

	case 7:
	{
		cout << "\nEnter word: ";
		string word;
		cin >> word;
		
		if (s.searchWord(word) == 1)
			cout << "Word found in string 1!";

		else
			cout << "Word not found :(";

		menu(s);

		break;
	}
	case 8:

		cout << "Enter character to search: ";
		char ch;
		cin >> ch;

		if (s.searchChar(ch) == 1) 
		{
			cout << "The charecter " << ch << " is in string 1!";
		}

		else
			cout << "The charecter is not found :(";

		menu(s);

		break;

	default:
		cout << "Enter valid option!";

	}
}

int main() {

	stringType s;

	menu(s);


	return 0;
}