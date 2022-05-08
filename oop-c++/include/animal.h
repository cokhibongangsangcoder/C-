#ifndef ANIMAL_H
#define ANIMAL_H

#include<iostream>

using namespace std;
struct Bodymassindex{
    double BMI;
    double age;
    double weight;
    double height;
};
class animal{
private:
    bool isAlive;
protected:
    virtual void action() = 0;
    virtual void estimate_health(Bodymassindex& inBodymassindex) = 0;
public:
    void setAlive(){
        isAlive = true;
    }
};

#endif