#ifndef AUDIO_H
#define AUDIO_H

#include "QtHeader.h"
#include "inc/fmod.h"

class Audio
{
public:
    Audio();
    void playSound(QString filename);

};

#endif // AUDIO_H
