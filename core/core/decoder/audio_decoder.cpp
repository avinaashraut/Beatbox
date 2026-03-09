
#include "audio_decoder.h"
#include <iostream>

AudioDecoder::AudioDecoder() {
    std::cout << "AudioDecoder initialized" << std::endl;
}

bool AudioDecoder::openFile(const std::string& filename) {
    std::cout << "Opening audio file: " << filename << std::endl;
    return true;
}

void AudioDecoder::decode() {
    std::cout << "Decoding audio stream..." << std::endl;
}
