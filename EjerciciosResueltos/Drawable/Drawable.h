#include"../commons.h"

#pragma once
class Drawable
{

public:
    virtual void draw();
};

void Drawable::draw()
{
    cout<<" drawing objects" << endl;
}