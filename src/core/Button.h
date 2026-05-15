#pragma once
#include "string.h"
#include "general.h"

#include <raylib.h>
class Button
{
    private:
    Texture2D texture;
    Vector2 size;
    float scale;
    float x,y;
    bool hovered,pressed;
    Tab tab;
    


    public:
    Button(Tab tab,Texture2D texture,int scale,int x,int y);
    void Draw();
    void SetTexture(Texture2D texture);
    bool Update(Vector2 mousePos,bool mouseDown);
    Tab GetTab();

};