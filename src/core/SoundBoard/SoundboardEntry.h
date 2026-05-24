#pragma once
#include "../../UI/Theme.h"
#include "../../UI/TextBox.h"
#include <string>
#include <vector>
#include <raylib.h>
#include "../general.h"
#include "../../UI/OpenFileDialog.h"

class SoundboardEntry{

    private:
    std::string name;
    std::string path;
    float x = 60;
    float y = 10;
    float width = 730;
    float height = 50;
    float drawY =y;
    
    inline static int activeBox = -1;
    inline static int BoxIdCounter = 0;

    std::vector<TextBox> boxes = {
        TextBox({ x+10,  70, 180, 35 }, "set key",   true),  
        TextBox({ x+200, 70, 500, 35 }, "set sound", false),
    };

    
    public:
    SoundboardEntry(std::string name,std::string path, float y);
    SoundboardEntry(float y);
    void Draw();
    std::string GetName();
    bool isPressed();
    void UpdateY(float y);
    void UpdateBoxes();

};