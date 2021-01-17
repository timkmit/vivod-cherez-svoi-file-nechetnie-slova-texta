#include <iostream>
#include <fstream>
using namespace std;
int main() {
	char str[10000];
	char str1[10000];
	bool k = true;
	ifstream file("C:\\Users\\student\\Downloads\\que.txt");
	
	file >> str;
	ofstream oFile("file1.txt");
	while (!file.eof()) {
		file >> str;
		
		if (k) {
			
			oFile << str << "\n";
		}
		k = !k;
	
	}
	oFile.close();
	system("file1.txt");

}