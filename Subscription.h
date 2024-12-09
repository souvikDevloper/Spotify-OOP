#ifndef SUBSCRIPTION_H
#define SUBSCRIPTION_H

#include "Song.h"

class Subscription {
public:
    virtual void playSong(const Song &song) = 0;
};

class FreeSubscription : public Subscription {
public:
    void playSong(const Song &song) override;
};

class PremiumSubscription : public Subscription {
public:
    void playSong(const Song &song) override;
};

#endif
