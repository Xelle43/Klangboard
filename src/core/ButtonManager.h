#pragma once

#include "Button.h"
#include "../UI/Theme.h"
#include "general.h"
#include <vector>

void InitButtons();
void DrawTabButtons();
void DrawSoundboardButton();
void UpdateSoundboardButton();
void UpdateButtons();

void UpdateButtonPosY(float y,std::string buttonname);

inline std::vector<Button> buttonList;
inline std::string PressedButton;
