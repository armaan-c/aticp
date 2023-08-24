#include <iostream>
#include <fstream>
#include <vector>
#include <unordered_map>
#include <map>

using namespace std;

int main(int argc, char* argv[]) {
    if (argc != 2) {
        cerr << "Usage: " << argv[0] << " <filename>" << endl;
        return 1;
    }

    ifstream inputFile(argv[1]);
    if (!inputFile) {
        cerr << "Error opening file." << endl;
        return 2;
    }

    map<int, int> numberCounts;
    int num;
    while (inputFile >> num) {
        numberCounts[num] = numberCounts[num] + 1;
    }



    inputFile.close();


    map<int, int> sortedNumberCounts(numberCounts.begin(), numberCounts.end());

    for (const auto& pair : sortedNumberCounts) {
        cout << pair.first << " " << pair.second << endl;
    }

    return 0;
}
