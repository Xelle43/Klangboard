#include <string>
#include <cstdio>

inline std::string OpenFileDialog() {
    FILE* pipe = popen("zenity --file-selection --file-filter='Audio files (mp3) | *.mp3' --title='Sound auswählen'", "r");
    if (!pipe) return "";
    
    char buffer[512];
    std::string result = "";
    while (fgets(buffer, sizeof(buffer), pipe) != NULL) {
        result += buffer;
    }
    pclose(pipe);
    
    if (!result.empty() && result.back() == '\n')
        result.pop_back();
    
    return result;
}