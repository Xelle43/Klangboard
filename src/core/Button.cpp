#include "Button.h"
#include "general.h"
#include <raylib.h>

Button::Button(gerneral::btn_Group group,std::string name,Texture2D texture,int scale,int x,int y,gerneral::Tab tab){
    this->group = group;
    this->name = name;
    this->texture = texture;
    this->scale = scale;
    this->size = Vector2{(float)texture.width * scale,(float)texture.height * scale};
    this->x = x;
    this->y = y;
    this->tab = tab;

}


void Button::Draw(){
    if(hovered)
        DrawRectangle(x, y, size.x, size.y, GRAY);
    float tempx = pressed ? x + ((size.x - (size.x * 0.8f))/2) : x;
    float tempy = pressed ? y + ((size.y - (size.y * 0.8f))/2) : y;
    DrawTextureEx(texture, (Vector2){tempx, tempy}, 0.0f,  pressed ? scale * 0.8f: scale , WHITE);
  
}
gerneral::Tab Button::GetTab(){
    return tab;
}
gerneral::btn_Group Button::GetGroup(){
    return group;
}
std::string Button::GetName(){
    return name;
}
bool Button::Update(Vector2 mousePos){
    
    if(CheckCollisionPointRec(mousePos, Rectangle{x,y,size.x,size.y}))
    {
        hovered = true;
        if(IsMouseButtonDown(MOUSE_LEFT_BUTTON))
        {
            pressed = true;
        }
        else{
            pressed = false;
        }   
        if(IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) return true;
    }
    else{
        hovered = false;
        pressed = false;
    }
    return false;
}