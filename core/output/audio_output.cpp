#include "audio_output.h"
#include <iostream>

AudioOutput::AudioOutput() {
    std::cout << "AudioOutput initialized" << std::endl;
}

void AudioOutput::openDevice() {
    std::cout << "Opening audio device..." << std::endl;
}

void AudioOutput::playSamples(const std::vector<float>& samples) {
    std::cout << "Playing " << samples.size() << " samples" << std::endl;
}
