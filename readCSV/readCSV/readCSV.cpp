#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include "CSVreader.h"

using namespace std;



int main() {

	vector<Row> myData = getData("data.csv");
	

	return 0;
}