/* 
 * File:   Helloer.cpp
 * Author: LAV1993
 *
 * Created on 25 Январ 2016 г., 22:11
 */

#include "Helloer.h"

Helloer::Helloer() {
}

Helloer::Helloer(const string& aWho) {
    who = aWho;
}

Helloer::Helloer(const Helloer& orig) {
}

Helloer::~Helloer() {
}

string Helloer::message() const {
    return (string)"Hello " + who;
}

