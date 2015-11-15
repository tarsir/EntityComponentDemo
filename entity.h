#ifndef _ENTITY_H_
#define _ENTITY_H_
#include <vector>
#include "component.h"

using std::vector;

class Entity {
    private:
        vector<Component> componentList;
        int id; //should be unique, make sure to guarantee

    public:
        ~Entity();
        void sayStuff();
};

#endif
