#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream input_file("input.txt");
    string line;

    while (getline(input_file, line)) {
        stringstream ss(line);
        string token;
        while (ss >> token) {
            bool is_int = true;
            bool is_float = true;
            bool is_exponent = false;

            // check if the token is an integer or float
            for (char c : token) {
                if (!isdigit(c)) {
                    is_int = false;
					if(c != '.' || !is_float){
						is_float = false;
						break;
					}
                }
				if(c == 'e' || c == 'E' || (c == '.' and c == 'e') || (c == '.' and c == 'E')){
					is_exponent = true;
				}
            }

            

            // print the result
            if (is_int) {
                cout << token << " is an integer" << endl;
            } else if (is_float) {
                cout << token << " is a float" << endl;
            } else if (!is_exponent) {
                cout << token << " is an exponent" << endl;
            }
        }
    }

    input_file.close();

    return 0;
}
