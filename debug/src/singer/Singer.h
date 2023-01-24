#ifndef EXAM_CSGAMES_2023_DEBUG_SINGER_H
#define EXAM_CSGAMES_2023_DEBUG_SINGER_H

#include <string>
#include "../song/Song.h"

#define NO_SONG_MESSAGE "It's not my song right now"

class Singer {
public:
    void setProposedSong(const Song *proposedSong);
    bool omgItsMySooooong(const Song *song) const;
    std::string sing() const;
private:
    const Song* _proposedSong = nullptr;
};


#endif //EXAM_CSGAMES_2023_DEBUG_SINGER_H
