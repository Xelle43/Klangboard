#include "SoundboardEntry.h"
#include <raylib.h>
#include <string>

SoundboardEntry::SoundboardEntry(std::string name,std::string path, float y){
    this->name = name;
    this->path = path;
    this->y = y;

}

void SoundboardEntry::Draw(){
    Rectangle rec = {x,y,width,height};
    DrawRectangleRoundedLines(rec, 0.5, 1, DARKGRAY);

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