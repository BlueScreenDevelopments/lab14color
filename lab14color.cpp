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
    //Setters
    void setRed(int r) {red = r; }
    void setGreen(int g) {green =g; }
    void setBlue(int b) {blue =b; }

    //Getters
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
