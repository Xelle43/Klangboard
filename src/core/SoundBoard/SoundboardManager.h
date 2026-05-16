#pragma once
#include "SoundboardEntry.h"
#include <string>
#include <vector>

inline std::vector<SoundboardEntry> Sounds;
inline int counter = 0;
inline std::string ButtonName;
void addSound(std::string name, std::string path);
void RenderSoundboard();
void CheckButtonPressed();
std::string GetButtonPressedName();