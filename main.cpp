#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <vector>

#include "raylib.h"
#include "src/UI/Theme.h"
#include "src/UI/UI.h"
#include "src/core/Button.h"
#include "src/core/general.h"

#define SCREEN_WIDTH 800
#define SCREEN_HEIGHT 450

int main()
{
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Hello Raylib");

    LoadTextures();

    Button Soundboard_btn(Tab::Soundboard,Soundboard_Icon,2,0,180);
    Button Mic_btn(Tab::Mic,Mic_Icon,2,0,230);
    Button Settings_btn(Tab::Settings,Settings_Icon,2,0,400);


    Tab currentTab = Soundboard;

    std::vector<Button> buttonList;
    buttonList.push_back(Soundboard_btn);
    buttonList.push_back(Mic_btn);
    buttonList.push_back(Settings_btn);

    Color Color_BG = {44, 47, 54, 255};

    char filepath[512];
    char command[1024];

    getcwd(filepath, sizeof(filepath));



    while (!WindowShouldClose())
    {
        //Update
        for(auto& b : buttonList){
         bool res = b.Update(GetMousePosition(), IsMouseButtonDown(MOUSE_LEFT_BUTTON));
         if(res)
            currentTab = b.GetTab();
        }


        //Draw
        BeginDrawing();

        ClearBackground(Color_BG);

        RenderUI(buttonList, currentTab);

        EndDrawing();
    }

    CloseWindow();
    return 0;
}