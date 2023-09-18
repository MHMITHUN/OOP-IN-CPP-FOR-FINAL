#include <iostream>
using namespace std;
class Box {
private:
    double height;
    double width;
    double length;

public:
    Box(double h, double w, double l) : height(h), width(w), length(l) {}

    double volume(){
        return height * width * length;
    }

	int operator>(Box &b){
        return this->volume() > b.volume();
    }
};

int main() {
    double h1, w1, l1;
    cout << "Enter height, width, and length for Box 1: ";
    cin >> h1 >> w1 >> l1;
    Box box1(h1, w1, l1);

    double h2, w2, l2;
    cout << "Enter height, width, and length for Box 2: ";
    cin >> h2 >> w2 >> l2;
    Box box2(h2, w2, l2);

    double volume1 = box1.volume();
    double volume2 = box2.volume();

    if (box1 > box2) {
        cout << "Box 1 is bigger than Box 2." << endl;
    } else if (box2 > box1) {
        cout << "Box 2 is bigger than Box 1." << endl;
    } else {
        cout << "Box 1 and Box 2 have the same volume." << endl;
    }

    return 0;
}
