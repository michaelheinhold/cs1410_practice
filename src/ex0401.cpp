#include <iostream>
#include <string>
using namespace std;

struct Date {
    int year;
    string month;
    int day;
};

struct Point {
    int x, y;
};

void printDate(Date& d) {
    cout << "Date: " << d.month << " " << d.day << ", " << d.year << endl;
}

void printPoint(Point& p){
    cout << "(" << p.x << "," << p.y << ")" << endl;
}

int main() {
    Date dob = { 1998, "June", 21 };
    Date weddingDay = { 2021, "June", 2 };

    Point p, q, h;
    // Prompt user for points

    char trash;
    cout << "Enter point p: ";
    cin >> trash >> p.x >> trash >> p.y >> trash;
    cout << "Enter point q: ";
    cin >> trash >> q.x >> trash >> q.y >> trash;

    printDate(dob);
    printDate(weddingDay);

    printPoint(p);
    printPoint(q);

    h.x = (p.x + q.x) / 2;
    h.y = (p.y + q.y) / 2;

    printPoint(h);
}