#include <iostream>
#include <string>
using namespace std;


int main() {

	cout<<"What's your first name? ";
	std::getline(cin, fname);
	printf ("\n");
	cout<<"Nice! What's your Middle initial? ";
	std::string mname;
	std::c >> mname;
	printf ("\n");
	cout<<"Awesome! Lastly, enter your Surname! ";
	std::string sname;
	std::cin >> sname;
	printf ("\n");
	
	cout << "Good day! " + fname << " " + mname << ". " + sname << + "\nHave a nice day " + fname + " ingat :)";
		cout << endl;
	return 0;
}
