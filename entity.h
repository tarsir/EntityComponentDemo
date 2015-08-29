#ifndef _ENTITY_H_
#define _ENTITY_H_
#include <vector>

using std::vector;

class Entity {
    private:
        vector<Component> componentList;
        int id; //should be unique, make sure to guarantee

    public:
        Entity();
        ~Entity();
};

#endif
