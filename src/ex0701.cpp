#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

using namespace std;

class Color {
private:
    double r, g, b;

public:
    Color():r(0.0), g(0.0), b(0.0){}
    Color(double r, double g, double b):r(r), g(g), b(b){}

    string toRGB(){
        stringstream sout;
        sout << "rgb(" << static_cast<int>(r * 255) << "," 
            << static_cast<int>(g * 255) << "," 
            << static_cast<int>(b * 255) << ")";

        return sout.str();
    }

    string toHEX(){
        stringstream sout;
        sout << "#" << setfill('0') << hex 
            << setw(2) << static_cast<int>(r * 255) << "," 
            << setw(2) << static_cast<int>(g * 255) << "," 
            << setw(2) << static_cast<int>(b * 255) << ")";

        return sout.str();
    }

};

int main() {
    Color c; // Black
    Color c1(1.0, .25, .5);

    cout << c.toRGB() << " --- " << c.toHEX() << endl;
    cout << c1.toRGB() << " --- " << c1.toHEX() << endl;
    return 0;
}