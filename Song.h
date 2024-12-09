#ifndef SONG_H
#define SONG_H

#include <string>

class Song {
private:
    std::string title;
    std::string artist;
    std::string genre;
    double duration; // in minutes

public:
    Song(std::string t, std::string a, std::string g, double d);

    std::string getTitle() const;
    std::string getArtist() const;
    std::string getGenre() const;
    double getDuration() const;

    void displaySongInfo() const;
};

#endif
