#pragma once
#include "ButtonManager.h"
#include "general.h"

inline void CheckButtons(){
    if(PressedButton == "ImportSound"){
        gerneral::ImportOverlay = !gerneral::ImportOverlay;
        
    }
}