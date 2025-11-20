#include <iostream>
using namespace std;

        int main() {
            float mark, total = 0;
            int numQuizzes = 3;

            for (int i = 1; i <= numQuizzes; i++) {
                cout << "Enter mark for Quiz " << i << ": ";
                cin >> mark;
                total += mark;   // accumulate the marks
            }

            float average = total / numQuizzes;

            cout << "Average mark of the 3 quizzes is: " << average << endl;

            return 0;
  
           }
