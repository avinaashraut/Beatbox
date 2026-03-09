#pragma once
#include <string>

class BeatboxPlayer {
public:
    BeatboxPlayer();

    void loadFile(const std::string& filename);
    void play();
};
