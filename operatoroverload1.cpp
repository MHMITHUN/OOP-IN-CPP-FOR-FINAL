#include<bits/stdc++.h>
using namespace std;
class ABC {
private:
    int c1;
    int c2;
public:
    ABC(int val1, int val2) {
        c1 = val1;
        c2 = val2;
    }
    void display() {
        cout << "c1: " << c1 <<endl << "c2: " << c2 << endl;
    }

    ABC operator+(ABC &temp) {
        int new_c1 = c1 + temp.c1;
        int new_c2 = c2 + temp.c2;
        return ABC(new_c1, new_c2);
    }
};
int main() {
    ABC o1(10, 20), o2(20, 30);
    ABC o3 = o1 + o2;
    o3.display();
    return 0;
}
