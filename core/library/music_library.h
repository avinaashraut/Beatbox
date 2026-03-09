#pragma once
#include <vector>
#include <string>

struct Song {
    std::string title;
    std::string artist;
    std::string album;
    std::string path;
};

class MusicLibrary {
public:
    void addSong(const Song& song);
    void listSongs();

private:
    std::vector<Song> songs;
};
