#include <iostream>
#include <cstring>
#include <cmath>
#include <fstream>
using namespace std;

int main(int argc, char* argv[]){
	int number;
	int sum = 0;
	ifstream infile;
	ofstream outfile;
	outfile.open("output.txt");
	infile.open(argv[1]);
	if (infile.fail()){
		outfile << "Cannot open file\n";
	}
	else{
		outfile << "x\t" << "x^2\t" << "Current Sum\t" << endl;
		outfile << "=\t" << "===\t" << "===========\t" << endl;
		while(infile >> number){
			sum = sum + number;
			outfile << number << "\t" << pow(number,2) << "\t" << sum << "\t" << endl;
		}
	}
	return 0;
	infile.close();
}