// Copyright 2021 Sozinov Kirill
#ifndef INCLUDE_PREY_H_
#define INCLUDE_PREY_H_

#include "object.h"

class Prey : public Object {
protected:
    unsigned int Life_time;
public:
    explicit Prey(Cell* cell);
    void live() override;
    void breeding();
};

#endif  // INCLUDE_PREY_H_