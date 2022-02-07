#include<iostream>
#include<string>
using namespace std;

void GenerateResponse() {
	cout << "Wow! That is fascinating and I would like to contribute more to the conversation!" << endl;
}

int main() {
	string doICare = "No";

	if (doICare == "Yes") {
		GenerateResponse();
	} else {
		cout << "Oh." << endl;
	}

	return 0;
}
