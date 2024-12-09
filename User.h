#ifndef USER_H
#define USER_H

#include "Playlist.h"
#include "Subscription.h"
#include <vector>

class User {
private:
    std::string username;
    Subscription* subscription;
    std::vector<Playlist> playlists;

public:
    User(std::string name, Subscription* sub);
    
    void createPlaylist(std::string playlistName);
    void addSongToPlaylist(std::string playlistName, const Song &song);
    void playSongFromPlaylist(std::string playlistName, const std::string &songTitle);
    void displayPlaylists() const;
};

#endif
