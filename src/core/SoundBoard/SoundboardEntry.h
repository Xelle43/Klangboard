#pragma once
#include "../../UI/Theme.h"
#include <string>
#include <vector>
#include <raylib.h>

class SoundboardEntry{

    private:
    std::string name;
    std::string path;
    float x = 60;
    float y = 10;
    float width = 730;
    float height = 50;


    
    public:
    SoundboardEntry(std::string name,std::string path, float y);
    SoundboardEntry(float y);
    void Draw();
    std::string GetName();
    bool isPressed();
    void UpdateY(float y);

};