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
    void setRed(int r) {red = r; }
    void setGreen(int g) {green =g; }
    void setBlue(int b) {blue =b; }

    int getRed() const {return red; }
    int getGreen() const {return green; }
    int getBlue() const {return blue; }
};

int main() {
    cout << "Color Class starting...!\n";

    
    return 0;
}
