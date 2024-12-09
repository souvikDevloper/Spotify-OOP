#include "Song.h"
#include <iostream>

Song::Song(std::string t, std::string a, std::string g, double d) {
    title = t;
    artist = a;
    genre = g;
    duration = d;
}

std::string Song::getTitle() const {
    return title;
}

std::string Song::getArtist() const {
    return artist;
}

std::string Song::getGenre() const {
    return genre;
}

double Song::getDuration() const {
    return duration;
}

void Song::displaySongInfo() const {
    std::cout << "Title: " << title << ", Artist: " << artist
              << ", Genre: " << genre << ", Duration: " << duration << " minutes." << std::endl;
}
