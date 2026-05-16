#include "Theme.h"
#include <raylib.h>

Texture2D Soundboard_Icon;
Texture2D Mic_Icon;
Texture2D Settings_Icon;
Texture2D Import_Icon;

const Color Color_BG   = {44, 47, 54, 255};
const Color Color_Line = {80, 80, 80, 255};
const Color Color_OverlayBG = {35, 41, 51,120};

void LoadTextures()
{
    Soundboard_Icon = LoadTexture("Art/audio-lines.png");
    Mic_Icon = LoadTexture("Art/mic.png");
    Settings_Icon = LoadTexture("Art/settings.png");
    Import_Icon = LoadTexture("Art/Soundboard/import.png");

}