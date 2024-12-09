#include <iostream>
#include "User.h"
#include "Subscription.h"
#include "Song.h"

int main() {
    FreeSubscription freeSub;
    PremiumSubscription premiumSub;

    User user1("Alice", &freeSub);
    User user2("Bob", &premiumSub);

    user1.createPlaylist("Chill Beats");
    user2.createPlaylist("Rock Classics");

    Song song1("Song A", "Artist 1", "Pop", 3.5);
    Song song2("Song B", "Artist 2", "Rock", 4.0);
    Song song3("Song C", "Artist 3", "Jazz", 5.0);

    user1.addSongToPlaylist("Chill Beats", song1);
    user1.addSongToPlaylist("Chill Beats", song2);
    user2.addSongToPlaylist("Rock Classics", song3);

    std::cout << "\nUser 1's Playlists:\n";
    user1.displayPlaylists();

    std::cout << "\nUser 2's Playlists:\n";
    user2.displayPlaylists();

    std::cout << "\nPlaying song from User 1's playlist (Chill Beats):\n";
    user1.playSongFromPlaylist("Chill Beats", "Song A");

    std::cout << "\nPlaying song from User 2's playlist (Rock Classics):\n";
    user2.playSongFromPlaylist("Rock Classics", "Song C");

    return 0;
}
