#include <stdlib.h>
#include <unistd.h>

#include "raylib.h"
#include "src/UI/Theme.h"
#include "src/UI/UI.h"
#include "src/core/ButtonManager.h"
#include "src/core/SoundBoard/SoundboardManager.h"
#include "src/core/ButtonCheck.h"

#define SCREEN_WIDTH 800
#define SCREEN_HEIGHT 450

int main()
{
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Hello Raylib");
    SetTargetFPS(60);

    LoadTextures();
    InitButtons();
    
    Color Color_BG = {44, 47, 54, 255};

    char filepath[512];
    char command[1024];

    getcwd(filepath, sizeof(filepath));

    addSound("hi","hi");
    addSound("hi","hi");
    addSound("hi","hi");



    while (!WindowShouldClose())
    {
        //Update
        UpdateButtons();
        CheckButtons();

        //Draw
        BeginDrawing();

        ClearBackground(Color_BG);

        RenderUI();

        EndDrawing();
    }

    CloseWindow();
    return 0;
}