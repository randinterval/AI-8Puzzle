#ifndef TREE_H
#define TREE_H
/*
    A tree class that will generate the search tree for the Problem.
    Here most of the helper functions for node and actual tree generation algorithm (bfs) is implemented
*/

#include "headers.h"

/*
 * Various Constants That I am using throughout the assignment
*/

#define ROW     3
#define COL     3
#define ROOT    0
#define LEFT    1
#define RIGHT   2
#define UP      3
#define DOWN    4

struct Node{
    //Node Variables
    char state[ROW][COL];
    
    
    //so we have four children each representing a operator
    int op; //to check which operation (left,right,up,down) created this node
    
    int depth; //to limit the depth during BFS or DFS
    std::string label; //for printing the graph using GraphWhiz
    
    //There are four possible operators (Up,down,left,right)
    Node *left;
    Node *right;
    Node *up;
    Node *down;
    
    //Node Helper Functions
    Node();
    void copyState(Node *);
    void stateToString(std::string &);
    void findSpaceIndex(int &,int &);
    void printNodeState();
    void setState(string state);
    
    //Functions to apply the four operators
    //i.e shift left,shift right, shift up and shift down
    bool shiftSpaceLeft();
    bool shiftSpaceRight();
    bool shiftSpaceUP();
    bool shiftSpaceDown();
    bool isGoalNode();
};

/* Tree Class */

class Tree{
    private:
        Node * root;
        int depth;
    public:
        Tree();
        void generate_Tree(int depth); //Generates tree unitl depth d is reached
        void generate_Tree(); //Generates tree until goal node is generated
        void print_Tree(); //Prints the tree in console - no longer needed as i have shifted to GUI
        void print_TreeWiz(); //Will print in Dot Format so a tree can be generated from it by the GraphWhiz Program (Serializes our tree to dot format)
        Node *getTree();
};

#endif
