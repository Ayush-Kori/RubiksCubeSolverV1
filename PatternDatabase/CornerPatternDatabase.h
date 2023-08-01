//
// Created by Ayush on 01-08-2023.
//


#ifndef RUBIKS_CUBE_SOLVER_CORNERPATTERNDATABASE_H
#define RUBIKS_CUBE_SOLVER_CORNERPATTERNDATABASE_H

#include "../RubiksCube.h"
#include "PatternDatabase.h"
#include "PermutationIndexer.h"
using namespace std;

class CornerPatternDatabase : public PatternDatabase {

    typedef RubiksCube::FACE F;

    PermutationIndexer<8> permIndexer;

public:
    CornerPatternDatabase();
    CornerPatternDatabase(uint8_t init_val);
    uint32_t getDatabaseIndex(const RubiksCube& cube) const;

};


#endif //RUBIKS_CUBE_SOLVER_CORNERPATTERNDATABASE_H

#ifndef RUBIKSCUBESOLVERV1_CORNERPATTERNDATABASE_H
#define RUBIKSCUBESOLVERV1_CORNERPATTERNDATABASE_H


class CornerPatternDatabase {

};


#endif //RUBIKSCUBESOLVERV1_CORNERPATTERNDATABASE_H
