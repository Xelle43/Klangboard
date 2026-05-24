#include "SoundboardManager.h"
#include "SoundboardEntry.h"
#include <string>

void addSound(std::string name, std::string path){
    int tempy = 60 + (counter * 60); 
    counter++;
    yPosAddButton = 60 +(counter * 60);
    SoundboardEntry newSound(name, path, tempy);
    Sounds.push_back(newSound);

    for( auto& s : Sounds)
    {
        if(s.GetName() == "button") s.UpdateY(60 +( counter * 60));
        UpdateButtonPosY((60+(counter * 60)), "AddSound");
    }
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

void InitSoundboardAddButton(){
    SoundboardEntry button(60);
    Sounds.push_back(button);
}