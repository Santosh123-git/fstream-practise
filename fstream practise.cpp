#include<iostream>
#include<fstream>
#include<string>
using namespace std;


int main() {
	/*string text;
	ofstream file("abc.txt");
	while (true) {
	getline(cin, text);
	if (text == "end") {
		return 0;
	}
	file << text<<endl;
	}

	file.close();*/
	string ho;
	ifstream te("abc.txt");
	while (getline(te,ho)) {
		cout << ho<<endl;
	}
	te.close();

}