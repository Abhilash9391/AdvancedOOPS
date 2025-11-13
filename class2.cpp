#include <iostream>
using namespace std;

// ----------------------------
// GLOBAL OBJECT
// ----------------------------
class Demo {
public:
    int a, b, c;  // primitive members (no initialization)
};

Demo globalObj;   // Global object → members WILL be zero-initialized

int main() {

    // ----------------------------
    // LOCAL OBJECT (stack)
    // ----------------------------
    Demo localObj;   // Local object → MEMBERS ARE GARBAGE (uninitialized)

    // ----------------------------
    // STATIC LOCAL OBJECT
    // ----------------------------
    static Demo staticObj; // Static object → MEMBERS WILL BE zero-initialized

    cout << "===== LOCAL OBJECT (stack) =====" << endl;
    cout << "localObj.a = " << localObj.a << endl;
    cout << "localObj.b = " << localObj.b << endl;
    cout << "localObj.c = " << localObj.c << endl;
    cout << "  --> These are GARBAGE VALUES\n" << endl;

    cout << "===== GLOBAL OBJECT =====" << endl;
    cout << "globalObj.a = " << globalObj.a << endl;
    cout << "globalObj.b = " << globalObj.b << endl;
    cout << "globalObj.c = " << globalObj.c << endl;
    cout << "  --> These are ZERO (global objects are auto-initialized)\n" << endl;

    cout << "===== STATIC OBJECT =====" << endl;
    cout << "staticObj.a = " << staticObj.a << endl;
    cout << "staticObj.b = " << staticObj.b << endl;
    cout << "staticObj.c = " << staticObj.c << endl;
    cout << "  --> These are ZERO (static objects are auto-initialized)\n" << endl;

    return 0;
}
