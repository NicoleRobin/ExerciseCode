#include "base.h"

class Derive : public Base
{
public:
    Derive() {}
    ~Derive() {}

public:
    virtual int Test(int n);
};
