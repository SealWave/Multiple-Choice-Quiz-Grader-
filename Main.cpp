#include <iostream>

using namespace std;

int main() {
    const int numQuestions = 5;
    const int numStudents = 5;
    const int maxQuestionLength = 100; // Maximum length for each question

    // Arrays to store questions, correct answers, student answers, and other data
    char questions[numQuestions][maxQuestionLength]; // Array of character arrays
    char correctAnswers[numQuestions];
    char studentAnswers[numStudents][numQuestions];
    int studentIDs[numStudents];
    int studentScores[numStudents] = {0};
    int questionMissedCount[numQuestions] = {0};

    // Input questions
    cout << "Enter " << numQuestions << " questions (one per line):" << endl;
    for (int i = 0; i < numQuestions; i++) {
        cout << "Question " << (i + 1) << ": ";
        cin.getline(questions[i], maxQuestionLength); // Input question as a line
    }

    // Input correct answers with validation
    cout << "Enter correct answers for each question (only A, B, C, D, E allowed): ";
    for (int i = 0; i < numQuestions; i++) {
        bool validInput = false;
        do {
            cin >> correctAnswers[i];
            // Validate correct answer
            if (correctAnswers[i] == 'A' || correctAnswers[i] == 'B' || correctAnswers[i] == 'C'
               || correctAnswers[i] == 'D' || correctAnswers[i] == 'E') {
                validInput = true;
            } else {
                cout << "Invalid input. Please enter only A, B, C, D, or E: ";
            }
        } while (!validInput);
    }

    // Input student roll numbers with validation
    for (int i = 0; i < numStudents; i++) {
        cout << "Enter roll number for student " << (i + 1) << ": ";
        bool validInput = false;
        do {
            cin >> studentIDs[i];
            // Validate student ID (simple validation for positive integers)
            if (studentIDs[i] > 0) {
                validInput = true;
            } else {
                cout << "Invalid input. Please enter a valid roll number: ";
            }
        } while (!validInput);
    }

    // Input answers for each student
    for (int i = 0; i < numStudents; i++) {
        cout << "Enter answers for student ID " << studentIDs[i] << " (only A, B, C, D, E allowed): ";
        for (int j = 0; j < numQuestions; j++) {
            bool validInput = false;
            do {
                cin >> studentAnswers[i][j];
                // Validate student answer
                if (studentAnswers[i][j] == 'A' || studentAnswers[i][j] == 'B' || studentAnswers[i][j] == 'C'
                   || studentAnswers[i][j] == 'D' || studentAnswers[i][j] == 'E') {
                    validInput = true;
                } else {
                    cout << "Invalid input. Please enter only A, B, C, D, or E: ";
                }
            } while (!validInput);
        }
    }

    // Compare student answers with correct answers and calculate scores
    for (int i = 0; i < numStudents; i++) {
        int score = 0;
        for (int j = 0; j < numQuestions; j++) {
            if (studentAnswers[i][j] == correctAnswers[j]) {
                score++;
            } else {
                questionMissedCount[j]++;
            }
        }
        studentScores[i] = score;
    }

    // Output student results
    cout << "Student Results:" << endl;
    for (int i = 0; i < numStudents; i++) {
        cout << "Student ID " << studentIDs[i] << ": ";
        for (int j = 0; j < numQuestions; j++) {
            cout << studentAnswers[i][j] << " ";
        }
        cout << " Score: " << studentScores[i] << "/" << numQuestions
             << " (" << (studentScores[i] * 100) / numQuestions << "%)" << endl;
    }

    // Output correct answers
    cout << "Answer Key:" << endl;
    for (int i = 0; i < numQuestions; i++) {
        cout << "Q" << (i + 1) << ": " << correctAnswers[i] << " ";
    }
    cout << endl;

    // Output question feedback
    cout << "Question Feedback:" << endl;
    for (int i = 0; i < numQuestions; i++) {
        cout << "Question " << (i + 1) << " missed by " << questionMissedCount[i] << " students" << endl;
    }

    return 0;
}

