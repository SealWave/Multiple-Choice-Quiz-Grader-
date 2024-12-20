Multiple-Choice Quiz Grading System

Overview

This C++ program automates the grading process for multiple-choice quizzes in a small classroom or training environment. It allows educators to input quiz questions, correct answers, and student responses, calculates individual scores, and provides feedback on both student and question performance. This tool simplifies the grading process while providing insights into frequently missed questions.

Features

Input Management:

Allows the input of up to 5 multiple-choice questions.

Accepts valid answers (A, B, C, D, E) for each question.

Collects roll numbers and answers for up to 5 students with validation.

Automated Grading:

Compares student answers with the correct answers to calculate scores.

Tracks how many students missed each question.

Comprehensive Reporting:

Displays each student’s answers, score, and percentage.

Outputs the answer key for reference.

Provides feedback on the number of students who missed each question.

Prerequisites

A C++ compiler (e.g., GCC, Clang, or an IDE like Visual Studio or Code::Blocks).

Basic knowledge of running C++ programs from the terminal or an IDE.

How It Works

Question Input:

The program prompts the user to input 5 questions (max length: 100 characters each).

Questions are stored in a 2D array.

Correct Answer Input:

For each question, the user enters the correct answer.

Input validation ensures only valid choices (A, B, C, D, E) are accepted.

Student Data Collection:

The user provides roll numbers for up to 5 students. Input is validated to ensure positive integers.

Each student’s answers to the 5 questions are collected, with validation for valid choices.

Grading:

Student answers are compared against the correct answers.

Scores are calculated based on the number of correct answers.

The program keeps a tally of how many students missed each question.

Result Display:

The program outputs each student’s ID, their answers, score, and percentage.

The answer key is displayed.

Feedback on the number of students who missed each question is provided.

How to Use

Compile the Program:
Use a C++ compiler to compile the file. For example:

g++ -o QuizGrader Main.cpp

Run the Program:
Execute the compiled program. For example:

./QuizGrader

Follow the Prompts:

Enter the quiz questions when prompted.

Provide the correct answers for each question.

Input student roll numbers and their answers to the quiz.

View the Results:

The program will display a summary of student performance.

It will show which questions were most frequently missed.

Use the feedback to adjust your teaching strategies or improve quiz questions.

Example Workflow

Input:

Questions:

What is the capital of France?

What is 2 + 2?

What is the boiling point of water?

Who wrote "Romeo and Juliet"?

What is the largest planet in the solar system?

Correct Answers: A, B, C, D, A

Student Roll Numbers: 101, 102, 103, 104, 105

Student Answers:

Student 101: A, B, C, D, A

Student 102: A, B, D, D, A

Student 103: A, C, C, D, E

Student 104: A, B, C, D, A

Student 105: B, B, C, A, A

Output:

Student Results:

Student 101: A B C D A | Score: 5/5 (100%)

Student 102: A B D D A | Score: 4/5 (80%)

Student 103: A C C D E | Score: 3/5 (60%)

Student 104: A B C D A | Score: 5/5 (100%)

Student 105: B B C A A | Score: 3/5 (60%)

Answer Key:

Q1: A | Q2: B | Q3: C | Q4: D | Q5: A

Question Feedback:

Q1: Missed by 1 student(s)

Q2: Missed by 1 student(s)

Q3: Missed by 0 student(s)

Q4: Missed by 1 student(s)

Q5: Missed by 2 student(s)

Customization

The following enhancements can be implemented:

Dynamic Input: Modify the program to accept more students and questions dynamically using vectors.

File I/O: Save and load questions, answers, and results from files.

Graphical Interface: Build a GUI to make the program more user-friendly.

Contribution

Feel free to fork this repository and submit pull requests for any improvements or additional features. Suggestions and feedback are always welcome.

License

This project is open-source and available under the MIT License. See the LICENSE file for more details.

