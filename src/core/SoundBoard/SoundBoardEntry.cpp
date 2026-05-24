#include "SoundboardEntry.h"


SoundboardEntry::SoundboardEntry(std::string name,std::string path, float y){
    this->name = name;
    this->path = path;
    this->y = y;

}
SoundboardEntry::SoundboardEntry(float y){
    this->name = "button";
    this->y = y;

}

void SoundboardEntry::Draw(){
    Rectangle rec = {x,y,width,height};
    DrawRectangleRoundedLines(rec, 0.5, 1, DARKGRAY);
    if(name == "button"){
        DrawTextureEx(Add_Icon, Vector2{x+340,y +15},0.0f, 1.0f, WHITE);
    }
    else{

    }

}
std::string SoundboardEntry::GetName(){
    return name;
}
bool SoundboardEntry::isPressed(){
    Rectangle rec = {x,y,width,height};
    if(CheckCollisionPointRec(GetMousePosition(),  rec)){
        return true;
    }
    return false;
}
void SoundboardEntry::UpdateY(float y){
    this->y = y;
}