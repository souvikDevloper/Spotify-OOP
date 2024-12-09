#include "User.h"
#include <iostream>

User::User(std::string name, Subscription* sub) : username(name), subscription(sub) {}

void User::createPlaylist(std::string playlistName) {
    playlists.push_back(Playlist(playlistName));
}

void User::addSongToPlaylist(std::string playlistName, const Song &song) {
    for (auto &playlist : playlists) {
        if (playlist.getName() == playlistName) {
            playlist.addSong(song);
            return;
        }
    }
    std::cout << "Playlist not found!" << std::endl;
}

void User::playSongFromPlaylist(std::string playlistName, const std::string &songTitle) {
    for (auto &playlist : playlists) {
        if (playlist.getName() == playlistName) {
            const auto& songs = playlist.getSongs(); // Use getter to access songs
            for (const auto &song : songs) {
                if (song.getTitle() == songTitle) {
                    subscription->playSong(song);
                    return;
                }
            }
        }
    }
    std::cout << "Song or Playlist not found!" << std::endl;
}

void User::displayPlaylists() const {
    for (const auto &playlist : playlists) {
        playlist.displayPlaylist();
    }
}
