#ifndef PLAYLIST_H
#define PLAYLIST_H

#include "Song.h"
#include <vector>
#include <string>

class Playlist {
private:
    std::string name;               // Private attribute
    std::vector<Song> songs;        // Private attribute

public:
    Playlist(std::string name);
    
    void addSong(const Song &song);
    void removeSong(const std::string &title);
    void displayPlaylist() const;

    // Getter for playlist name
    std::string getName() const;

    // Getter for songs
    const std::vector<Song>& getSongs() const; 
};

#endif
