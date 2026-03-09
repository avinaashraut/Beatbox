#include <iostream>

int main(int argc, char* argv[]) {

    std::cout << "Beatbox Audio Engine Starting..." << std::endl;

    if (argc < 2) {
        std::cout << "Usage: beatbox <audio_file>" << std::endl;
        return 0;
    }

    std::cout << "Loading file: " << argv[1] << std::endl;

    // TODO: Audio decoding and playback will be implemented here

    std::cout << "Playback engine not implemented yet." << std::endl;

    return 0;
}
