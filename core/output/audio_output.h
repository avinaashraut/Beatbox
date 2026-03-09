#pragma once
#include <vector>

class AudioOutput {
public:
    AudioOutput();
void playSamples(const std::vector<float>& samples);
    void openDevice();
    void playSamples(const std::vector<float>& samples);
};
