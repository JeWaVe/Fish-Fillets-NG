#ifndef HEADER_WORLDBRANCH_H
#define HEADER_WORLDBRANCH_H

class Path;
class LevelNode;

#include "NoCopy.h"

#include <string>

/**
 * Can read graph of level nodes.
 */
class WorldBranch : public NoCopy {
    private:
        LevelNode *m_root;
        LevelNode *m_ending;
    private:
        bool wasSolved(const std::string &codename);
        void prepareNode(LevelNode *node, bool hidden);
        void insertNode(const std::string &parent, LevelNode *new_node);
    public:
        WorldBranch(LevelNode *root);

        LevelNode* parseMap(const Path &datafile, LevelNode **outEnding);
        void addNode(const std::string &parent, LevelNode *new_node,
                bool hidden);
        void setEnding(LevelNode *new_node);
};

#endif
