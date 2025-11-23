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
// A. INPUT ✅: y
// B. OUTPUT ✅: y
// C. CALCULATIONS ✅: y
// D. LOGIC and ALGORITHMS ✅: y
//    (Optional) flow chart link or file name: 


// ------------- TESTING -------------
// PASS ALL GIVEN SAMPLE RUN TESTS ✅: y
// (Optional) Additional tests count: 2


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

double midterm;
double finalExam;
getInput(midterm, finalExam);

double finalScore = calcFinalScore(assignAvg, midterm, finalExam);

char letter;
calcLetterGrade(finalScore, letter);

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
  bool valid = false;

  while (valid == false) {
    cout << prompt;
    cin >> num;

  if (!cin.fail() && num >= 0 && num <= 4) {
    valid = true;
  }
  else {
    cout << "Illegal Score! Please try again!" << endl;
    cin.clear();
    cin.ignore(1000, '\n');
  }
  }
}

double assignAverage(int numAssigns) {
  double aSum = 0.0;
  if (numAssigns == 0) {
    return 0.0;
  }
  double score;
for (int i = 1; i <= numAssigns; ++i) {
  readScore("Enter score " + to_string(i) + ": ", score);
  aSum += score;
}
return aSum / numAssigns;
}

void getInput(double &midtermScore, double &finalExamScore) {
readScore("Enter your midterm exam score: ", midtermScore);
readScore("Enter your final exam score: ", finalExamScore);
}


double calcFinalScore(double assignAvg, double midterm, double finalExam) {
  return (assignAvg * assigWeight) + (midterm * midtermWeight) + (finalExam * finalWeight);
}

void calcLetterGrade(double finalScore, char &letter) {
  if (finalScore >= 3.3) {
  letter = 'A';
  }
else if (finalScore >= 2.8) {
  letter = 'B';
}
else if (finalScore >= 2.0) {
  letter = 'C';
}
else if (finalScore >= 1.2) {
  letter = 'D';
}
else {
  letter = 'F';
}
}





// ------------- DESIGN -------------
/* 
Program Name: Final Grade Calculator

Program Description:

Design:
A. INPUT
int numAssigns
double score           // multiple scores
double midterm
double finalExam
// not in main
int aNum 
double num

B. OUTPUT         
double finalScore          
char letter                

C. CALCULATIONS
// constants
const double assigWeight = 0.6
const double midtermWeight = 0.2
const double finalWeight = 0.2
// calculations
aSum = aSum + score
assignAvg = aSum / numAssigns
finalScore = (assignAvg * assigWeight) + (midterm * midtermWeight) + (finalExam * finalWeight)

D. LOGIC and ALGORITHMS
// Funct Prototypes
void welcome()
int readInt(string prompt)
void readScore(string prompt, double &num)
double assignAverage(int numAssigns)
void getInput(double &midtermScore, double &finalExamScore)
double calcFinalScore(double assignAvg, double midterm, double finalExam)
void calcLetterGrade(double finalScore, char &letter)

// Main
main() {
    welcome()

    int numAssigns = readInt("Enter the number of assignments (0 to 10): ")

    double assignAvg = assignAverage(numAssigns)

    double midterm
    double finalExam
    getInput(midterm, finalExam)

    double finalScore = calcFinalScore(assignAvg, midterm, finalExam)
    char letter
    calcLetterGrade(finalScore, letter)

    cout << fixed << setprecision(1)
    DISPLAY "Your Final Numeric score is: " << finalScore
    DISPLAY "Your Final Grade is: " << letter

    MESSAGE "Thank you for using my Grade Calculator!"
    RETURN 0
}

// funct's
VOID welcome() {
    MESSAGE "Welcome to my Final Grade Calculator!"
    DISPLAY "Please enter the following information and I will calculate your Final Numerical Grade and Letter Grade for you!"
    DISPLAY "The number of assignments must be between 0 and 10."
    DISPLAY "All scores entered must be between 0 and 4."
}

// readInt funct
INT readInt(string prompt) {
    int aNum
    bool valid = false

    WHILE (valid == false) {
        DISPLAY prompt
        INPUT aNum

        IF (aNum >= 0 AND aNum <= 10) {
            valid = true
        }
        ELSE {
            DISPLAY "Illegal Value! Please try again!"
            CLEAR cin
        }
    }
    RETURN aNum
}

// readScore funct
VOID readScore(string prompt, double &num) {
    bool valid = false

    WHILE (valid == false) {
        DISPLAY prompt
        INPUT num

        IF (num >= 0 AND num <= 4) {
            valid = true
        }
        ELSE {
            DISPLAY "Illegal Score! Please try again!"
            CLEAR cin
        }
    }
}

// assignAverage funct
DOUBLE assignAverage(int numAssigns) {
    double aSum = 0.0
    double score

    IF (numAssigns == 0) {
        RETURN 0.0
    }

    FOR (int i = 1; i <= numAssigns; ++i) {
        readScore("Enter score " + to_string(i) + ": ", score)
        // calculate
    }
    RETURN // calculate avg
}

// getInput funct
VOID getInput(double &midtermScore, double &finalExamScore) {
    readScore("Enter your midterm exam score: ", midtermScore)
    readScore("Enter your final exam score: ", finalExamScore)
}

// calcFinalScore funct
DOUBLE calcFinalScore(double assignAvg, double midterm, double finalExam) {
    RETURN // calculated finalScore
}

// calcLetterGrade funct
VOID calcLetterGrade(double finalScore, char &letter) {
    IF (finalScore >= 3.3) {}
        letter = 'A'
}
    ELSE IF (finalScore >= 2.8) {
        letter = 'B'
}
    ELSE IF (finalScore >= 2.0) {
        letter = 'C'
}
    ELSE IF (finalScore >= 1.2) {
        letter = 'D'
}
    ELSE {
        letter = 'F'
}
}


SAMPLE RUNS
Welcome to my Final Grade Calculator!
Please enter the following information and I will calculate your Final Numerical Grade and Letter Grade for you!
The number of assignments must be between 0 and 10.
All scores entered must be between 0 and 4.
Enter the number of assignments (0 to 10): 6
Enter score 1: 3.4 
Enter score 2: 4 
Enter score 3: 2.5 
Enter score 4: 3.3
Enter score 5: 3.1
Enter score 6: 2.5
Enter your midterm exam score: 3.5
Enter your final exam score: 4
Your Final Numeric score is 3.4
Your Final Grade is A
Thank you for using my Grade Calculator!


Welcome to my Final Grade Calculator!
Please enter the following information and I will calculate your Final Numerical Grade and Letter Grade for you!
The number of assignments must be between 0 and 10.
All scores entered must be between 0 and 4.
Enter the number of assignments (0 to 10): 3
Enter score 1: 3 
Enter score 2: 4 
Enter score 3: 2.5 
Enter your midterm exam score: 2.5
Enter your final exam score: 2
Your Final Numeric score is 2.8
Your Final Grade is B
Thank you for using my Grade Calculator!


Welcome to my Final Grade Calculator!
Please enter the following information and I will calculate your Final Numerical Grade and Letter Grade for you!
The number of assignments must be between 0 and 10.
All scores entered must be between 0 and 4.
Enter the number of assignments (0 to 10): 12
Illegal Value! Please try again!!
Enter the number of assignments (0 to 10): 5
Enter score 1: 3.4 
Enter score 2: 4 
Enter score 3: 2.5 
Enter score 4: 5.5
Illegal Score! Please try again!
Enter score 4: 3.5
Enter score 5: 3.1
Enter your midterm exam score: 3.5
Enter your final exam score: 4
Your Final Numeric score is 3.5
Your Final Grade is A
Thank you for using my Grade Calculator!

*/