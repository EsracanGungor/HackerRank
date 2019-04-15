#include <sstream>
#include <vector>
#include<string>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    vector<int> vec;      // Declares a vector to store the ints
    stringstream ss(str); // Declares a stringstream object to deal with the
                          // modification of the string
    char ch;
    int temp;

    while (ss) // While the stringstream object does not hit a null byte
    {
      ss >> temp >> ch; // Extract the comma seperated ints with the extraction
                        // >> operator
      vec.push_back(temp); // Push the int onto the vector
    }

    return vec; // Return the vector of ints
  }

  int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}

