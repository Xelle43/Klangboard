#include "SoundboardManager.h"
#include <string>

void addSound(std::string name, std::string path){
    int tempy = 60 + (counter * 60); 
    counter++;
    SoundboardEntry newSound(name, path, tempy);
    Sounds.push_back(newSound);
}
void RenderSoundboard(){
    for(auto& s : Sounds)
    {
        s.Draw();
    }
}
void CheckButtonPressed(){
    for(auto& s : Sounds)
    {
        if(s.isPressed())
        {
            ButtonName = s.GetName();
        }
    }
}
std::string GetButtonPressedName(){
    return ButtonName;
}