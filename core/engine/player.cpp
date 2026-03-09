#include "player.h"
#include <iostream>
#include <string>
BeatboxPlayer::BeatboxPlayer() {
    std::cout << "Beatbox Engine Initialized" << std::endl;
}

void BeatboxPlayer::loadFile(const std::string& filename) {
    std::cout << "Loading audio file: " << filename << std::endl;
}

void BeatboxPlayer::play() {
    std::cout << "Playback started (not implemented yet)" << std::endl;
}

int main(int argc, char* argv[]) {

    if (argc < 2) {
        std::cout << "Usage: beatbox <audio_file>" << std::endl;
        return 0;
    }

    BeatboxPlayer player;

    player.loadFile(argv[1]);
    player.play();

    return 0;
}
