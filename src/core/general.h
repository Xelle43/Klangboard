#pragma once

namespace gerneral{

enum Tab{
    Soundboard,
    Mic,
    Settings,
    None
};
inline Tab currentTab = Soundboard;

enum btn_Group{
    Tab_Group,
    Soundboard_Group
};

inline btn_Group current_Group;


inline bool ImportOverlay = false;


}
