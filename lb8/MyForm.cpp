#include "MyForm.h"

private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	string input;
	cout << "Ââåä³òü ðÿäîê: ";
	getline(cin, input);

	// Ïåðåòâîðåííÿ ìàëèõ ë³òåð íà âåëèê³
	for (char& c : input) {
		if (islower(c)) {
			c = toupper(c);
		}
	}

	cout << "Ïåðåòâîðåíèé ðÿäîê: " << input << endl;

	return 0;
}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		string fullName;
		cout << "
		getline(cin, fullName);
		size_t lastNameLength = fullName.find(' ');
		size_t firstNameLength = fullName.find(' ', lastNameLength + 1) - lastNameLength - 1;
		size_t middleNameLength = fullName.length() - lastNameLength - firstNameLength - 2;

		
		size_t totalLength = fullName.length() - 2;

		cout << "Äîâæèíà ïð³çâèùà: " << lastNameLength << endl;
		cout << "Äîâæèíà ³ìåí³: " << firstNameLength << endl;
		cout << "Äîâæèíà ïî áàòüêîâ³: " << middleNameLength << endl;
		cout << "Äîâæèíà ðÿäêà, ùî îá'ºäíóº âñ³ ñëîâà: " << totalLength << endl;

		
		string lastName = fullName.substr(0, lastNameLength);
		string firstName = fullName.substr(lastNameLength + 1, firstNameLength);
		string middleName = fullName.substr(lastNameLength + 2 + firstNameLength, middleNameLength);
		cout << "Ïð³çâèùå: " << lastName << endl;
		cout << "²í³ö³àëè: " << lastName[0] << "." << firstName[0] << "." << middleName[0] << "." << endl;

		return 0;
	}
	}