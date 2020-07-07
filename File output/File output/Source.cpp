#include <iostream>
#include <fstream>


using namespace std;


int main() {

	cout << "File Output\n" << endl;

	ofstream outFile;

	outFile.open("Test.txt");// creates a file to write into

	outFile << "Hello File IO" << endl;// writting in the file

	outFile.close();// command to close the file

	return 0;
}