#include <string>
#include <fstream>
#include <iostream>
#include <vector>

using namespace std;


class Row {
public:
	string index;
	string currency;
	int amount;
	Row(string i, string c, string a);
};

Row::Row(string i, string c, string a) {
	index = i;
	currency = c;
	amount = stoi(a);
}

vector<Row> getData(string fileName) {
	ifstream myFile(fileName);
	if (!myFile.is_open()) cout << "Could not open file" << endl;

	string index;
	string currency;
	string amount;
	vector<Row> dataVec;

	while (myFile.peek() != EOF) {
		getline(myFile, index, ',');
		getline(myFile, currency, ',');
		getline(myFile, amount, '\n');

		Row currRow(index, currency, amount);
		dataVec.push_back(currRow);
	}

	return dataVec;
}