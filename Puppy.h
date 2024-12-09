//
// Created by nickh on 12/8/2024.
//

#ifndef PUPPY_H
#define PUPPY_H
#include "Cutie.h"


class Puppy : public Cutie {
    string description() override {
        return "A cute puppy with ears";

    }
    int cutenessRating() override {
        return 10; //  10/10 Cuteness :D

    }


};



#endif //PUPPY_H
