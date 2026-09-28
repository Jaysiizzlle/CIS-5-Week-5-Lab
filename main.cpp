#include <iostream>

// Lab 5 — Jaylen Chae
// CIS 5 Week 05 · Eligibility check
  using std::cout;
  using std::cin;
  using std::endl;
int main() {
  int age = 0;
  double gpa = 0.0;

  // TODO: cout question, then cin, for age and for gpa
  cout << "What is your age?" << endl;
  cin >> age;
  cout << "What is your GPA" << endl;
  cin >> gpa;
  // Thresholds: adult at 18, honors at 3.5 (change these and say why in a comment)
  // TODO: bool adult = ...;
  // TODO: bool honors = ...;
  bool adult = age >= 18;
  bool honors = gpa >= 3.5;
  // TODO: if (adult && honors) { ... }        best case first
  // TODO: else if (adult || honors) { ... }   exactly one requirement met
  // TODO: else { ... }                        neither — the program still answers
  if (adult && honors) {
    cout << "Congrats you are eligible for honors!" << endl;
  } else if (adult || honors) {
    cout << "Half way there need complete ONE more requirement." << endl;
  } else {
    cout << "Sorry need to complete BOTH requirements." << endl;
  }
  // Edge values to run: 17 / 18 with a 3.8, and 3.4 / 3.5 with age 20

  return 0;
}
