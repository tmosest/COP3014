#include <iostream>
#include <iomanip>
#include <ctime>

void seedRNG(int seed);
int getRand(int min, int max);
int getMin(int a, int b, int c);
void getMin(int a, int b, int c, int & min);
int getMax(int a, int b, int c);
void getMax(int a, int b, int c, int & max);
void getMinMax(int a, int b, int c, int & min, int & max);
void formatDouble(double d, int numDecimals);
bool isEven(int x);
void printChar(char c, int numTimes);
double fToC(double f);
double cToF(double c);

// DO NOT REMOVE THESE COMMENTS -- comments that start with @ are actually
// commands to the assessment tool.
//@include(main)
//@addRule(commentAll)
int main()
{
    
    // You can do whatever tests you want in here. When we compile
    // your code we are actually going to remove this main function
    // and substitute our own. Then we are going to test your functions
    // individually.
    std::cout << "==============================\n";
    std::cout << "Setting Seed\n";
    std::cout << "==============================\n";
    seedRNG(0);
    
    int n = 20;
    int randoms[n];
    int myMin = 0;
    int myMax = 0;
    
    std::cout << "\n==============================\n";
    std::cout << "Getting Random Numbers\n";
    std::cout << "==============================\n\n";
    seedRNG(0);
    for (int i = 0; i < 10; ++i) {
        randoms[i] = getRand(0, 100);
        std::cout << "random[" << i << "]=" << randoms[i] << "\n";
    }
    
    std::cout << "\n==============================\n";
    std::cout << "Testing min function one\n";
    std::cout << "==============================\n\n";
    
    for(int i = 0; i < n - 3; i +=3 ) {
        int min = getMin(randoms[i], randoms[i + 1], randoms[i + 2]);
        std::cout << "getMin(" << randoms[i] << ", " << randoms[i + 1] << ", " << randoms[i + 2] << ") = " << min << "\n";
    }
    
    std::cout << "\n==============================\n";
    std::cout << "Testing min function two with reference\n";
    std::cout << "==============================\n\n";
    
    for(int i = 0; i < n - 3; i +=3 ) {
        getMin(randoms[i], randoms[i + 1], randoms[i + 2], myMin);
        std::cout << "getMin(" << randoms[i] << ", " << randoms[i + 1] << ", " << randoms[i + 2] << ") = " << myMin << "\n";
    }
    
    std::cout << "\n==============================\n";
    std::cout << "Testing max function one\n";
    std::cout << "==============================\n\n";
    
    for(int i = 0; i < n - 3; i +=3 ) {
        int max = getMax(randoms[i], randoms[i + 1], randoms[i + 2]);
        std::cout << "getMax(" << randoms[i] << ", " << randoms[i + 1] << ", " << randoms[i + 2] << ") = " << max << "\n";
    }
    
    std::cout << "\n==============================\n";
    std::cout << "Testing max function two with reference\n";
    std::cout << "==============================\n\n";
    
    for(int i = 0; i < n - 3; i +=3 ) {
        getMax(randoms[i], randoms[i + 1], randoms[i + 2], myMax);
        std::cout << "getMax(" << randoms[i] << ", " << randoms[i + 1] << ", " << randoms[i + 2] << ") = " << myMax << "\n";
    }
    
    std::cout << "\n==============================\n";
    std::cout << "Testing min max function two with reference\n";
    std::cout << "==============================\n\n";
    
    for(int i = 0; i < n - 3; i +=3 ) {
        getMinMax(randoms[i], randoms[i + 1], randoms[i + 2], myMin, myMax);
        std::cout << "getMinMax(" << randoms[i] << ", " << randoms[i + 1] << ", " << randoms[i + 2] << ") = " << myMin << " : " << myMax << "\n";
    }
    
    std::cout << "\n==============================\n";
    std::cout << "Format Decimal\n";
    std::cout << "==============================\n\n";
    
    double d = 1.123456789;
    
    for(int  i = 0; i < 5; i++) {
        std::cout << "PRINTDOUBLE[" << i << "] = ";
        formatDouble(d, i);
        std::cout << "\n";
    }
    
    std::cout << "\n==============================\n";
    std::cout << "Is Even\n";
    std::cout << "==============================\n\n";
    
    for (int i = 0; i < 10; i++) {
        int r = getRand(0, 100);
        std::cout << "ISEVEN(" << r << ")=" << std::boolalpha << isEven(r) << "\n";
    }
    
    std::cout << "\n==============================\n";
    std::cout << "Print Char x times\n";
    std::cout << "==============================\n\n";
    
    for (int i = 0; i < 10; i++) {
        char c = getRand(33, 126);
        int numTimes = getRand(1, 10);
        std::cout << "PRINTCHAR(" << c << "," << numTimes << ")=";
        printChar(c, numTimes);
        std::cout << "\n";
    }
    
    std::cout << "\n==============================\n";
    std::cout << "F to C\n";
    std::cout << "==============================\n\n";
    
    for (int i = 0; i < 10; i++) {
        int f = getRand(0, 100);
        std::cout << "FTOC(" << f << ")=" << fToC(f) << "\n";
    }
    
    std::cout << "\n==============================\n";
    std::cout << "C to F\n";
    std::cout << "==============================\n\n";
    
    seedRNG(0);
    for (int i = 0; i < 10; i++) {
        int c = getRand(0, 100);
        std::cout << "CTOF(" << c << ")=" << cToF(c) << "\n";
    }
    
    std::cout << "Press ENTER to exit\n";
    std::cin.ignore(80, '\n');
    std::cin.get();
    return 0;
}
// DO NOT REMOVE THESE COMMENTS -- these comments are actually
// commands to the assessment tool.
//@removeRule(commentAll)

// Oops! I accidentally did this one for you.
// Don't forget to copy the prototype down here,
// remove the semicolon, add the curly braces,
// and implement the functionality.
void seedRNG(int seed)
{
    srand(seed);
}

// You must implement every single function requested or your
// code will not compile. If you cannot figure out how to
// get it to work, implement it anyway with dummy values.
// We can't test your code if it doesn't compile.

/**
 * Generates Random numbers between min and max inclusive.
 */
int getRand(int min, int max) {
    return ( rand() % (max - min + 1) ) + min;
}

/**
 * Get the minimun of three numbers
 */
int getMin(int a, int b, int c) {
    int min = (a < b) ? a : b;
    return (min < c) ? min : c;
}

/**
 * Get min and set it to the referenece variable called & min.
 */
void getMin(int a, int b, int c, int & min) {
    min = getMin(a, b, c);
}

int getMax(int a, int b, int c) {
    int max = (a > b) ? a : b;
    return (max > c) ? max : c;
}

void getMax(int a, int b, int c, int & max) {
    max = getMax(a, b, c);
}

void getMinMax(int a, int b, int c, int & min, int & max) {
    min = getMin(a, b, c);
    max = getMax(a, b, c);
}

void formatDouble(double d, int numDecimals) {
    std::cout << std::setprecision(numDecimals) << d;
}

bool isEven(int x) {
    return (x % 2) == 0;
}

void printChar(char c, int numTimes) {
    for(int i = 0; i < numTimes; i++) {
        std::cout << c;
    }
}

double fToC(double f) {
    return (f - 32) / 1.8;
}

double cToF(double c) {
    return (c * 1.8) + 32;
}
