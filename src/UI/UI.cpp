#include "UI.h"

void RenderUI(std::vector<Button> buttonList, Tab currentTab)
{
    DrawRectangleLines(0, 0, 50, 450, Color_Line);
    DrawRectangleLines(50, 0, 750, 450, Color_Line);

    for(auto& b : buttonList){
        b.Draw();
    }
    float T_StartX = 50;
    float T_StartY = 0;
    
    switch(currentTab){
        case Tab::Soundboard:
            DrawText("Soundboard", 300, 200, 20, DARKGRAY);
            break;
        case Tab::Mic:
            DrawText("Mic", 300, 200, 20, DARKGRAY);
            break;
        case Tab::Settings:
            DrawText("Settings", 300, 200, 20, DARKGRAY);
            break;


    }
}