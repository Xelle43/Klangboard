#include "ButtonManager.h"
#include "general.h"

void InitButtons(){
    Button Soundboard_btn(gerneral::btn_Group::Tab_Group,"Soundboard_Tab",Soundboard_Icon,2,0,180,gerneral::Tab::Soundboard);
    Button Mic_btn(gerneral::btn_Group::Tab_Group,"Mic_Tab",Mic_Icon,2,0,230,gerneral::Tab::Mic);
    Button Settings_btn(gerneral::btn_Group::Tab_Group,"Settings_Tab",Settings_Icon,2,0,400,gerneral::Tab::Settings);

    //Sidebar
    Button ImportSound_btn(gerneral::btn_Group::Soundboard_Group,"ImportSound",Import_Icon,1.5,720,15,gerneral::Tab::None);


    buttonList.push_back(Soundboard_btn);
    buttonList.push_back(Mic_btn);
    buttonList.push_back(Settings_btn);
    buttonList.push_back(ImportSound_btn);
}
void DrawTabButtons(){
    for(auto& b : buttonList){
        if(b.GetGroup() == gerneral::btn_Group::Tab_Group)
            b.Draw();
    }
}
void DrawSoundboardButtons(){
    for(auto& b : buttonList){
        if(b.GetGroup() == gerneral::btn_Group::Soundboard_Group)
            b.Draw();
    }
}

void UpdateButtons(){
        for(auto& b : buttonList){
         bool res = b.Update(GetMousePosition());
         if(res)
         {
            if(b.GetGroup() == gerneral::btn_Group::Tab_Group) gerneral::currentTab = b.GetTab();
            PressedButton = b.GetName();
            return;
         }
        }
        PressedButton = "";

        
}