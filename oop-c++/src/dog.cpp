#include<iostream>
#include"dog.h"

dog::dog(int inWeight, string inType){
        this->mWeight = inWeight;
        this->mType = inType;
}

void dog::action(){
    cout << "gau gau" << endl;
}

int dog::bite(dog* pDog){
    if(true == pDog->getStatus()){
        cout << "We are friend, I dont bite" << endl;
    } else {
        cout << "Bite successfully" << endl ;
    }
}

void dog::setFriend(){
     this->isFriend=true;
}

void dog::setEnemy(){
     this->isFriend=false;
}

void dog::estimate_health(Bodymassindex& inBodymassindex){
    BMI = inBodymassindex.weight/inBodymassindex.height;
    if (BMI > 10){
         cout<< " Your dog is fat" << "\n";
         cout<< " Its BMI is : " << BMI << "\n";
    } else{
         cout<< " Your dog is thin " << "\n";
         cout<< " Its BMI is : " << BMI << "\n";
    }
}