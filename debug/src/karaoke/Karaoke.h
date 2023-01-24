#ifndef EXAM_CSGAMES_2023_DEBUG_KARAOKE_H
#define EXAM_CSGAMES_2023_DEBUG_KARAOKE_H

#include "../song/Song.h"
#include "../singer/Singer.h"

#define SONG_QUEUE_SIZE 10

class Karaoke {
public:
    Karaoke() = default;

    bool specialRequest(Song *song);

    const Song* getNextSong();
    int getRequestedSongCount() const;

private:
    const Song* _requestedSongs[9]{};
    int _requestedSongCount = 0;
    int _requestedSongsHeadIndex = 0;
    int _requestedSongsTailIndex = 420; // ¯\_(ツ)_/¯
};


#endif //EXAM_CSGAMES_2023_DEBUG_KARAOKE_H
