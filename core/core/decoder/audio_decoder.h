#pragma once
#include <string>

class AudioDecoder {
public:
    AudioDecoder();

    bool openFile(const std::string& filename);
    void decode();
};
