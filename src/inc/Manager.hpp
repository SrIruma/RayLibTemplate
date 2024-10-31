#ifndef MANAGER_HPP
#define MANAGER_HPP

#include "raylib.h"

class Manager {
public:
    Manager(int width, int height, const char* title, const char* iconPath);
    ~Manager();

    void Update();
    void Toggle();

private:
    int width;
    int height;
};

#endif // Manager_HPP
