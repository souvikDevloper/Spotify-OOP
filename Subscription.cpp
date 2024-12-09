#include "Subscription.h"
#include <iostream>

void FreeSubscription::playSong(const Song &song) {
    std::cout << "Playing song: " << song.getTitle() << " by " << song.getArtist() << " with ads!" << std::endl;
}

void PremiumSubscription::playSong(const Song &song) {
    std::cout << "Playing song: " << song.getTitle() << " by " << song.getArtist() << " ad-free!" << std::endl;
}
