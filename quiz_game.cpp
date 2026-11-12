
#include <iostream>
using namespace std;

int main() {
    int answer;
    int score = 0;

    cout << "===== QUIZ GAME =====" << endl;

    // Question 1
    cout << "\n1. Which language is used for OOPS?" << endl;
    cout << "1. HTML\n2. C++\n3. CSS\n4. SQL" << endl;
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 2) {
        cout << "Correct Answer!" << endl;
        score++;
    } else {
        cout << "Wrong Answer!" << endl;
    }

    // Question 2
    cout << "\n2. Which concept is used to hide data?" << endl;
    cout << "1. Inheritance\n2. Polymorphism\n3. Encapsulation\n4. Loop" << endl;
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 3) {
        cout << "Correct Answer!" << endl;
        score++;
    } else {
        cout << "Wrong Answer!" << endl;
    }

    // Question 3
    cout << "\n3. Which symbol is used to end a statement in C++?" << endl;
    cout << "1. .\n2. ,\n3. ;\n4. :" << endl;
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 3) {
        cout << "Correct Answer!" << endl;
        score++;
    } else {
        cout << "Wrong Answer!" << endl;
    }

    cout << "\n===== QUIZ RESULT =====" << endl;
    cout << "Your Score: " << score << "/3" << endl;

    return 0;
}
