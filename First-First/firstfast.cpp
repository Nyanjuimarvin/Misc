#include <iostream>;

float firstFast(float x);

int main()
{

    std::cout << "Hello" << std::endl;
}

// Calculate f(x) = 1/sqrt x;

float firstFast(float myFloat)
{

    float halfFloat = 0.5 * myFloat;

    // Cast address of myFloat to  intPtr and dereference *Read Float as Int*
    int temp = *(int *)&myFloat; // Bits

    //-0.5 log(y)
    temp = 0x5f3759df - (temp >> 1); //??

    // Start with simple notation :: find invsqrt if y = 1/sqrt y
    // log(1/sqrt y) = log (pow(y,-0.5)) = -0.5 log(y)
    temp = 0x5f3759df - (temp >> 1);// ??
    
}