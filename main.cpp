/* 
 * File:   main.cpp
 * Author: duory
 *
 * Created on 20 Сентябрь 2015 г., 21:57
 */

#include <cstdlib>
#include <iostream>
#include "Helloer.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    Helloer helloer("World");
    cout << helloer.message() << endl;
    return 0;
}

