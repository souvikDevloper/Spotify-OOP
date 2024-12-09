#include "Playlist.h"
#include <iostream>
#include <algorithm>

Playlist::Playlist(std::string n) : name(n) {}

std::string Playlist::getName() const {
    return name;
}

const std::vector<Song>& Playlist::getSongs() const {
    return songs; // Return the private vector
}

void Playlist::addSong(const Song &song) {
    songs.push_back(song);
}

void Playlist::removeSong(const std::string &title) {
    songs.erase(std::remove_if(songs.begin(), songs.end(),
                [&](const Song &song) { return song.getTitle() == title; }),
                songs.end());
}

void Playlist::displayPlaylist() const {
    std::cout << "Playlist: " << name << std::endl;
    for (const auto &song : songs) {
        song.displaySongInfo();
    }
}
