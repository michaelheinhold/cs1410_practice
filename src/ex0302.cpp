#include <iostream>
#include <cmath>
#include <string>

using namespace std;

string findQuadrant(double deg);

string findQuadrant(double deg){
    double rad = 3.14 * deg / 180;
    if(sin(rad) >= 0){
        if(cos(rad) >= 0){
            return "Quadrant I";
        } else {
            return "Quadrant II";
        }
    } else {
        if(cos(rad) >= 0){
            return "Quadrant IV";
        } else {
            return "Quadrant III";
        }
    }
}

int main() {
    cout << findQuadrant(23) << endl;
    cout << findQuadrant(123) << endl;
    cout << findQuadrant(223) << endl;
    cout << findQuadrant(323) << endl;

    return 0;
}