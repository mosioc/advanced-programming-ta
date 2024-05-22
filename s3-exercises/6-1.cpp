#include <iostream>

using namespace std;

int main() {
    double subject1, subject2, subject3;
    const double passingScore = 10.0;
    const double maxScore = 20.0;

    // Input scores for each subject
    cout << "Enter the score for Subject 1 (0-20): ";
    cin >> subject1;

    cout << "Enter the score for Subject 2 (0-20): ";
    cin >> subject2;

    cout << "Enter the score for Subject 3 (0-20): ";
    cin >> subject3;

    // Ensure scores are within the valid range (opt.)
    subject1 = max(0.0, min(maxScore, subject1));
    subject2 = max(0.0, min(maxScore, subject2));
    subject3 = max(0.0, min(maxScore, subject3));

    // Calculate the average score
    double average = (subject1 + subject2 + subject3) / 3;

    // Display the student's classification based on the average
    cout << "Average Score: " << average << endl;

    if (average >= 18) {
        cout << "Classification: Excellent" << endl;
    } else if (average >= 16) {
        cout << "Classification: Very Good" << endl;
    } else if (average >= 12) {
        cout << "Classification: Average" << endl;
    } else if (average >= 12) {
    } else {
        cout << "Classification: Needs Improvement" << endl;
    }

    // Determine pass/fail status for each subject
    cout << "Pass/Fail Status for Each Subject:" << endl;
    cout << "Subject 1: " << (subject1 >= passingScore ? "Passed" : "Failed") << endl; // shorthand if/else (using ternary operator)
    cout << "Subject 2: " << (subject2 >= passingScore ? "Passed" : "Failed") << endl;
    cout << "Subject 3: " << (subject3 >= passingScore ? "Passed" : "Failed") << endl;

    return 0;
}