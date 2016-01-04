#pragma once
/*
 * Printable.h
 *
 *  Created on: 17 jun 2013
 *      Author: seb
 */

#ifndef PRINTABLE_H_
#define PRINTABLE_H_


#include <string>
#include <iostream>
using namespace std;

template <class T>
class Printable {
public:
    virtual string toString() = 0;
    friend ostream& operator<<(ostream& os, T t) {
        os << t.toString();
        os.flush();
        return os;
    }
};

#endif /* PRINTABLE_H_ */
