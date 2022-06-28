#include "functions.h"

int main()
{
	int input;
	cout << "\n\nWould you like to: \n\n1. Create a File\n2. Read a File\n3. Edit a file\nInput: "; cin >> input;

	switch (input)
	{
	case 1:
		create();
		break;
	case 2:
		read_record();
		break;
	case 3:
		update_record();
		break;
	default:
		cout << "\nIncorrect option, Please select from the stated options\n";
		main();
		break;
	}
}


