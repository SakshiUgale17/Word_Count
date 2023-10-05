#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

int main() {
  ifstream in("Test1.txt"); // Open the text file

  if (in.is_open()) {
    string line;
    int Word_Count = 0;

    while (std::getline(in, line)) {
      stringstream ss(line);
      string word;

      while (ss >> word) {
        Word_Count++;
      }
    }

    in.close();

    cout << "Number of words in the file: " << Word_Count << std::endl;
  } else {
    cout << "Error in opening the file." << std::endl;
  }

}
