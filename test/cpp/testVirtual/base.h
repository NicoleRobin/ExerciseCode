#pragma once

class Base
{
public:
    Base() {}
    virtual ~Base() {}

public:
    virtual int Test(int n) = 0;
};
