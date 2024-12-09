//
// Created by nickh on 12/8/2024.
//

#ifndef KITTY_H
#define KITTY_H
#include "Cutie.h"


class Kitty : public Cutie {
    public:
        string description() override {
            return "The cutest kitty every :3";
        }

    int cutenessRating() override {
            return 9; //Because cats have 9 lives

        }
};



#endif //KITTY_H
