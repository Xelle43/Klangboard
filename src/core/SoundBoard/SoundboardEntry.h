#pragma once

#include <string>
class SoundboardEntry{

    private:
    std::string name;
    std::string path;
    float x = 60;
    float y;
    float width = 730;
    float height = 50;
    
    public:
    SoundboardEntry(std::string name,std::string path, float y);
    void Draw();
    std::string GetName();
    bool isPressed();

};