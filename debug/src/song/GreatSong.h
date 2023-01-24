#ifndef EXAM_CSGAMES_2023_DEBUG_GREATSONG_H
#define EXAM_CSGAMES_2023_DEBUG_GREATSONG_H


#include "Song.h"

class GreatSong : Song {
public:
    GreatSong(const std::string &name, const std::string &lyrics);

    std::string sing() const override;
};


#endif //EXAM_CSGAMES_2023_DEBUG_GREATSONG_H
