#include "Button.h"
#include <raylib.h>

Button::Button(Tab tab,Texture2D texture,int scale,int x,int y){
    this->tab = tab;
    this->texture = texture;
    this->scale = scale;
    this->size = Vector2{(float)texture.width * scale,(float)texture.height * scale};
    this->x = x;
    this->y = y;

}

void Button::Draw(){
    if(hovered)
        DrawRectangle(x, y, size.x, size.y, GRAY);
    float tempx = pressed ? x + ((size.x - (size.x * 0.8f))/2) : x;
    float tempy = pressed ? y + ((size.y - (size.y * 0.8f))/2) : y;
    DrawTextureEx(texture, (Vector2){tempx, tempy}, 0.0f,  pressed ? scale * 0.8f: scale , WHITE);
  
}
Tab Button::GetTab(){
    return tab;
}
bool Button::Update(Vector2 mousePos,bool mouseDown){
    
    if(CheckCollisionPointRec(mousePos, Rectangle{x,y,size.x,size.y}))
    {
        hovered = true;
        if(mouseDown)
        {
            pressed = true;
            return true;
        }
        else{
            pressed = false;
        }   
    }
    else{
        hovered = false;
        pressed = false;
    }
    return false;
}