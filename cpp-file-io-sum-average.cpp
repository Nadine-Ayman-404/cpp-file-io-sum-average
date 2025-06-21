#include<iostream>
#include<fstream>
using namespace std;

int main() {
    ifstream inputfile("input.txt");
    ofstream outputfile("output.txt");

    if (inputfile.is_open() == 0 || outputfile.is_open() == 0) {
        cerr << "Error opening files" << "\n";
        return 1;
    }

    int num, sum = 0, count = 0;
    double avg = 0;

    while (inputfile >> num && inputfile.good()) {
        sum += num;
        count++;
    }
    inputfile.close();

    if (count == 0) {
        cerr << "No numbers found" << "\n";
        return 1;
    }

    avg = (double)sum / (double)count;
    outputfile << "Sum: " << sum << "\n" << "Average: " << avg;
    outputfile.close();

    return 0;
}