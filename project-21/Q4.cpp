#include <iostream>
using namespace std;

int main() {
    int score;
    char grade;

    cout << "Enter your score (0 to 100): ";
    cin >> score;

    grade = (score >= 90) ? 'A' :
            (score >= 80) ? 'B' :
            (score >= 70) ? 'C' :
            (score >= 60) ? 'D' :
            (score >= 50) ? 'E' : 'F';

    cout << "Your grade is " << grade << ". ";

    switch(grade) {
        case 'A': cout << "Excellent work!"; break;
        case 'B': cout << "Well done."; break;
        case 'C': cout << "Good job."; break;
        case 'D': cout << "You passed, but you could do better."; break;
        case 'E': cout << "Almost there."; break;
        case 'F': cout << "Sorry, you failed."; break;
        default:  cout << "Invalid grade."; break;
    }

    cout << endl;

    if (grade != 'F') {
        cout << "Congratulations! You are eligible for the next level!" << endl;
    } else {
        cout << "Please try again next time." << endl;
    }
}