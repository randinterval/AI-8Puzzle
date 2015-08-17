/*
    The following class ecapsulates the various
    algorithms that I have Implemented
    1) BFS = Simple Breadth First Search
    2) DFS = Simple DFS that will run upto to certain depth..
    3) DLS = DLS Function which will call DFS with certain depth
    4) IDS = Iterative Deeping Search - Will run a loop and call DFS with a new depth limit
    one each iteration

    Each implementation is iterative (i.e implicitly using stack in DFS)
*/

#ifndef ALGORITHMS_H
#define ALGORITHMS_H

#include "Tree.h"

class Algorithms
{
    public:
        static bool BFS(Node * Tree, queue<Node *> &Path);
        static bool DFS(int depth,Node * Tree,queue<Node *> &Path);
        static bool DLS(int dlimit,Node * Tree,queue<Node *> &Path);
        static bool IDS(int maxDepth, Node * Tree, int &cutoff, queue<Node *> &Path);
};

#endif
