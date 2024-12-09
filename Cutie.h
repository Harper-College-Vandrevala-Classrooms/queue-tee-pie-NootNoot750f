//
// Created by nickh on 12/8/2024.
//

#ifndef CUTIE_H
#define CUTIE_H
#include <iostream>
#include <string>
using namespace std;


class Cutie {
public:
    virtual string description() = 0;
    virtual int cutenessRating() = 0;
    virtual ~Cutie() = default;
};



#endif //CUTIE_H
