#include "audio.h"
#include <iostream>

Audio::Audio()
{
}
void Audio::playSound(QString filename){

    FMOD_SYSTEM *system;
    FMOD_SOUND  *sound1;
    FMOD_CHANNEL *channel1;

    FMOD_RESULT result = FMOD_System_Create(&system);

    if (result == FMOD_OK) result = FMOD_System_Init(system, 100, 0, NULL);

    filename = "./sound/"+filename+".ogg";
    std::string str = filename.toStdString();
    const char* s = str.c_str();

    qDebug() << result;
    result = FMOD_System_CreateSound(system, "./sound/slash.ogg", FMOD_DEFAULT, NULL, &sound1);
    qDebug() << result;
    result = FMOD_System_PlaySound(system, sound1, NULL, false, &channel1);

    if (result == FMOD_OK) {

                   FMOD_Channel_SetVolume(channel1, 20);
                    FMOD_System_Update(system);
    }
    FMOD_System_Release(system);
}
