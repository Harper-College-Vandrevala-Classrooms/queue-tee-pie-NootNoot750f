//
// Created by nickh on 12/8/2024.
//

#ifndef PYGMYMARMOSET_H
#define PYGMYMARMOSET_H
#include "Cutie.h"


class PygmyMarmoset : public Cutie {
public:
    string description() override {
        return "Who is this Diva Marmoset?!?";
    }

    int cutenessRating() override {
        return 365; //Because this diva is a brat
    }
};



#endif //PYGMYMARMOSET_H
