/* 
 * File:   Helloer.h
 * Author: LAV1993
 *
 * Created on 25 Январ 2016 г., 22:08
 */

#ifndef HELLOER_H
#define	HELLOER_H

#include <iostream>

using namespace std;

class Helloer {
public:
    Helloer();
    Helloer(const string& aWho);
    Helloer(const Helloer& orig);
    virtual ~Helloer();
    string message() const;
private:
    string who;

};

#endif	/* HELLOER_H */

