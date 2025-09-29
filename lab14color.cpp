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
    Color black;                //default
    Color white(255,255,255);   //parameter --white
 

    cout << "Black: "
         << black.getRed() << ", "
         << black.getGreen() <<", "
         << black.getBlue() << ", ";

    cout << "White: "
         << white.getRed() << ", "
         << white.getGreen() <<", "
         << white.getBlue() << ", ";

    return 0;
}
