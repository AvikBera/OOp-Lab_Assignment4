#include <iostream>
using namespace std;

class Academic {
protected:
    int marks;

public:
    void setMarks(int m) {
        marks = m;
    }
};

class Sports {
protected:
    int sportsScore;

public:
    void setSportsScore(int s) {
        sportsScore = s;
    }
};

class Result : public Academic, public Sports {
public:
    void displayResult() {
        int total = marks + sportsScore;

        cout << "Academic Marks: " << marks << endl;
        cout << "Sports Score: " << sportsScore << endl;
        cout << "Total Score: " << total << endl;
    }
};

int main() {
    Result r;

    r.setMarks(80);
    r.setSportsScore(15);

    r.displayResult();

    return 0;
}