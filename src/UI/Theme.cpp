#include "Theme.h"

Texture2D Soundboard_Icon;
Texture2D Mic_Icon;
Texture2D Settings_Icon;

const Color Color_BG   = {44, 47, 54, 255};
const Color Color_Line = {80, 80, 80, 255};

void LoadTextures()
{
    Soundboard_Icon = LoadTexture("Art/audio-lines.png");
    Mic_Icon = LoadTexture("Art/mic.png");
    Settings_Icon = LoadTexture("Art/settings.png");

}