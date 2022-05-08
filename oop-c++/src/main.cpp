#include"dog.h"

using namespace std;

int main(){
    // dog dog1(10,"chihuahua");
    // dog* p = &dog1;
    // p->action();
    // p->setEnemy();
    // p->bite(p);
    // p->action();
    // p->setFriend();
    // p->bite(p);


    // struct
    struct Bodymassindex ibm;
    ibm.weight = 50;
    ibm.height = 0.7; 
    dog* p = new dog(ibm.weight,"chihuahua");
    p->estimate_health(ibm);
    delete p;
}