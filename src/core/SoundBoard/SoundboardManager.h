#pragma once
#include "SoundboardEntry.h"
#include <string>
#include <vector>
#include "../general.h"
#include "../ButtonManager.h"

inline std::vector<SoundboardEntry> Sounds;
inline int counter = 0;
inline std::string ButtonName;
inline float yPosAddButton;

void addSound(std::string name, std::string path);
void RenderSoundboard();
void CheckButtonPressed();
void InitSoundboardAddButton();
std::string GetButtonPressedName();