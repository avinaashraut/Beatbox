#pragma once
#include <vector>

class AudioOutput {
public:
    AudioOutput();

    void openDevice();
    void playSamples(const std::vector<float>& samples);
};
