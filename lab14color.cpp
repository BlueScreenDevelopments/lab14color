#include <iostream>

using namespace std;

/*
Brandon Julao
COMSC-210-5470
09.28.25
Color Class
*/

class Color {
private:
    int red;
    int green;
    int blue;

public:
    //default constr
    Color() : red(0), green(0), blue (0) {}

    //parameters constr
    Color(int r, int g, int b) : red(r), green(g), blue(b){}

    //setters
    void setRed(int r) {red = r; }
    void setGreen(int g) {green =g; }
    void setBlue(int b) {blue =b; }

    //getters
    int getRed() const {return red; }
    int getGreen() const {return green; }
    int getBlue() const {return blue; }
};

int main() {
    Color c;
    c.setRed(100);
    c.setGreen(150);
    c.setBlue(200);

    cout << "Color Class starting...!\n";

    //Printouts with getters
    cout << "Red: " << c.getRed()
         << " Green: " << c.getGreen()
         << " Blue: " << c.getBlue() << "\n";

    return 0;
}
