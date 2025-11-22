// ------------- FILE HEADER -------------
// Author ✅: Ella Henner
// Assignment ✅: 8
// Date ✅:11/23/25
// Citations: 


// ------------- ZYBOOKS SCORES -------------
// Chapter ✅: 8
// Participation ✅: 100%
// Challenge ✅: 100%
// Labs ✅: 100%


// ------------- DISCORD POSTS -------------
// https://discord.com/invite/URYKKf8YHm
// Count ✅: 1
// Links (Optional): 


// ------------- DESIGN DOCUMENT -------------
// A. INPUT ✅: 
// B. OUTPUT ✅:
// C. CALCULATIONS ✅:
// D. LOGIC and ALGORITHMS ✅:
//    (Optional) flow chart link or file name: 


// ------------- TESTING -------------
// PASS ALL GIVEN SAMPLE RUN TESTS ✅: 
// (Optional) Additional tests count:   


// ------------- CODE -------------

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// constants
const double assigWeight = 0.6;
const double midtermWeight = 0.2;
const double finalWeight = 0.2;

// function prototypes
void welcome();
int readInt(string prompt);
void readScore(string prompt, double &num);
double assignAverage(int numAssigns);
void getInput(double &midtermScore, double &finalExamScore);
double calcFinalScore(double assignAvg, double midterm, double finalExam);
void calcLetterGrade(double finalScore, char &letter);

// main
int main() {
  
welcome();

int numAssigns = readInt("Enter the number of assignments (0 to 10): ");

double assignAvg = assignAverage(numAssigns);

double midterm = readScore("Enter your midterm exam score: ");
double finalExam = readScore("Enter your final exam score: ");

double finalScore = calcFinalScore(assignAvg, midterm, finalExam);
char letter = calcLetterGrade(finalScore, letter);

cout << fixed << setprecision(1);
cout << "\nYour Final Numeric score is: " << finalScore << endl;
cout << "Your Final Grade is: " << letter << endl << endl;

cout << "Thank you for using my Grade Calculator!" << endl;

  return 0;
}

void welcome() {
  cout << "Welcome to my Final Grade Calculator!" << endl;
  cout << "Please enter the following information and I will calculate your Final Numerical Grade and Letter Grade for you!" << endl;
  cout << "The number of assignments must be between 0 and 10." << endl;
  cout << "All scores entered must be between 0 and 4." << endl << endl;
}
int readInt(string prompt) {
  int aNum;
  bool valid = false;

  while (valid == false) {
    cout << prompt;
    cin >> aNum;

  if (!cin.fail() && aNum >= 0 && aNum <= 10) {
    valid = true;
  }
  else {
    cout << "Illegal Value! Please try again!" << endl;
    cin.clear();
    cin.ignore(1000, '\n');
  }
}
return aNum;
}

void readScore(string prompt, double &num) {
  double num;
  bool valid = false;

  while (valid == false) {
    cout << prompt;
    cin >> num;

  if (!cin.fail() && score >= 0 && score <= 4) {
    valid = true;
  }
  else {
    cout << "Illegal Score! Please try again!" << endl;
    cin.clear();
    cin.ignore(1000, '\n');
  }
  }
return num;
}

double assignAverage(int numAssigns) {
  double aSum = 0.0;
  if (numAssigns == 0) {
    return 0.0;
  }
for (int i = 1; i <= numAssigns; ++i) {
  double aScore = readScore("Enter score: " + to_string(i) + ": ", temp);
  aSum += temp;
}
return aSum / numAssigns;
}

void getInput(double &midtermScore, double &finalExamScore) {

}


double calcFinalScore(double assignAvg, double midterm, double finalExam) {
  return (assignAvg * assigWeight) + (midterm * midtermWeight) + (finalExam * finalWeight);
}

void calcLetterGrade(double finalScore, char &letter) {
  if (finalScore >= 3.3) {
  return 'A';
  }
else if (finalScore >= 2.8) {
  return 'B';
}
else if (finalScore >= 2.0) {
  return 'C';
}
else if (finalScore >= 1.2) {
  return 'D';
}
else {
  return 'F';
}
}





// ------------- DESIGN -------------
/* 
Program Name:

Program Description:

Design:
A. INPUT
Define the input variables including name data type. 

B. OUTPUT
Define the output variables including data types. 

C. CALCULATIONS
Describe calculations used by algorithms in step D.  
List all formulas. 
If there are no calculations needed, state there are no calculations.

D. LOGIC and ALGORITHMS
Design the logic of your program using pseudocode or flowcharts. 
Use conditionals, loops, functions or array constructs.
List the steps in transforming inputs into outputs. 
https://github.com/Glen-Sasek-PCC-Instructor/2025-06-22/blob/main/Pseudocode-Reference.txt


SAMPLE RUNS
Copy from assignment document.

*/