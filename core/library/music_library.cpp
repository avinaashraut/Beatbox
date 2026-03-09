#include "music_library.h"
#include <iostream>

void MusicLibrary::addSong(const Song& song) {
    songs.push_back(song);
}

void MusicLibrary::listSongs() {
    for (const auto& song : songs) {
        std::cout << song.title << " - " << song.artist << std::endl;
    }
}
