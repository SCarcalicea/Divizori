#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

ifstream inputFile("divizori.in");
ofstream outfile("divizori.out");

int main() {

    if (inputFile) {

        int nr;
        int whichCondition;
        vector<int> numbers;

        // Read numbers into vectors
        inputFile >> nr;
        inputFile >> whichCondition;
        int temp;
        while (inputFile >> temp) {
            numbers.push_back(temp);
        }

        // Create new vector for the number of divizors for each number
        vector<int> nrDivizori;
        for (auto i = numbers.begin(); i != numbers.end(); ++i) {

            int number = *i;
            int cnt = 0;
            for (int i = 1; i <= sqrt(number); i++) {
                if (number % i == 0) {
                    // If divisors are equal, 
                    // count only one 
                    if (number / i == i)
                        cnt++;

                    else // Otherwise count both 
                        cnt = cnt + 2;
                }
            }
            nrDivizori.push_back(cnt);
        }

        // Find out the largest number of divizors
        int maxD = 0;
        for (auto i = nrDivizori.begin(); i != nrDivizori.end(); ++i) {
            if (maxD < *i) {
                maxD = *i;
            }
        }

        // Implement solution for each condition
        if (whichCondition == 1) { // Number of special sequences

            int numberOfSequences = -1;
            for (auto i = nrDivizori.begin(); i != nrDivizori.end(); ++i) {
                if (maxD == *i) {
                    numberOfSequences++;
                }
            }

            cout << "Number of sequences is: " << numberOfSequences << endl;
        }
        else { // Longest sequence

            // Compose a vector containing the positions for each special number
            vector<int> specialNrPos;
            for (int i = 0; i < nrDivizori.size(); i++) {
                if (maxD == nrDivizori[i]) {
                    specialNrPos.push_back(i);
                }
            }


            // Find out the starting position and ending position for the longest special sequence
            int beginPos = 0;
            int endPos = 0;
            int difference = 0;
            for (auto i = specialNrPos.begin(); i != specialNrPos.end(); i++) {

                int tempStart = *i;
                int tempEnd = 0;
                if (++i != specialNrPos.end()) { // Take the next position
                    tempEnd = *i;
                }
                --i; // Go back one position

                difference = tempEnd - tempStart;
                if (difference > (endPos - beginPos)) {
                    beginPos = tempStart;
                    endPos = tempEnd;
                }
            }

            cout << "Longest sequence is: " << endl;
            for (int i = beginPos; i <= endPos; i++) {
                cout << numbers[i] << " ";
            }
        }
    }
    return 0;
}