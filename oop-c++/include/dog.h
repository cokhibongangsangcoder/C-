#ifndef DOG_H
#define DOG_H

#include<iostream>
#include"animal.h"

using namespace std;

class dog : public animal{
private:
    int mWeight;
    string mType;
    bool isFriend;
public:
    double BMI;
    double age;
    double weight;
    double height;
    dog(int inWeight, string inType);
    void setEnemy();
    void setFriend();
    void action();
    int bite(dog* pDog);
    bool getStatus(){ return isFriend; }
    void estimate_health(Bodymassindex& inBodymassindex) override;
};

#endif