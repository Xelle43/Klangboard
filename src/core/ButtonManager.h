#pragma once

#include "Button.h"
#include "../UI/Theme.h"
#include "general.h"
#include <vector>

void InitButtons();
void DrawTabButtons();
void DrawSoundboardButtons();
void UpdateButtons();

void UpdateButtonPosY(float y,std::string buttonname);

inline std::vector<Button> buttonList;
inline std::string PressedButton;
