#include <iostream>;

float firstFast(float x);

int main(){

    std::cout <<"Hello" << std::endl;
}

//Calculate f(x) = 1/sqrt x;

float firstFast(float myFloat){

    float halfFloat = 0.5 * myFloat;

    //Cast address of myFloat to  intPtr and dereference *Read Float as Int*
    int temp = *( int *) &myFloat;//Bits

}