#include <iostream>
#include <string>
using namespace std;

string dayNames[] = {
    "Sunday", "Monday", "Tuesday", "Wednesday",
    "Thursday", "Friday", "Saturday"
};

int getPreviousDayIndex(int d, int n) {
    return (d - n % 7 + 7) % 7;
}

int getNextDayIndex(int d, int n) {
    return (d + n) % 7;
}

int main() {
    int d, beforeN, afterN;
    cout << "Enter the Day (0 for Sunday to 6 for Saturday): ";
    cin >> d;

    cout << "Enter the nth before Day: ";
    cin >> beforeN;

    cout << "Enter the nth next Day: ";
    cin >> afterN;

    int beforeIndex = getPreviousDayIndex(d, beforeN);
    int afterIndex = getNextDayIndex(d, afterN);

    cout << "Entered Day: " << dayNames[d] << endl;
    cout << "Before " << beforeN << "th Day: " << dayNames[beforeIndex] << endl;
    cout << "Next " << afterN << "th Day: " << dayNames[afterIndex] << endl;

    return 0;
}

