#include "Tree.h"
#include "QMessageBox"

/* Node Functions */

/* Node Constructor - by Default I have added this state
*/
Node::Node()
{
    this->state[0][0] = 'P';
    this->state[0][1] = 'A';
    this->state[0][2] = 'K';
    this->state[1][0] = 'A';
    this->state[1][1] = 'I';
    this->state[1][2] = 'T';
    this->state[2][0] = ' ';
    this->state[2][1] = 'S';
    this->state[2][2] = 'N';
}

/*
    This function will copy the state of the node that is passed as parameter
*/
void Node::copyState(Node * orig)
{
    for(int i=0;i<ROW;i++)
    {
        for(int j=0;j<COL;j++)
        {
            this->state[i][j] = orig->state[i][j];
        }
    }
}

/*
This is a helper function to get the row and col of the space in the array
so we can then apply various operations (left,up,down,right) on the space
*/
void Node::findSpaceIndex(int &rIndex,int &cIndex)
{
    for(int i=0;i<ROW;i++)
    {
        for(int j=0;j<COL;j++)
        {
            //cout<<state[i][j];
            if(state[i][j]==' ')
            {
                rIndex = i;
                cIndex = j;
            }
        }
    }
    //cout<<endl;
    //cout<<"Space Index are: "<<rIndex<<" "<<cIndex<<endl;
}

/*
    This will shift the space to the left. If the operation is successfull it will return true otherwise false (i.e the space cannot be shifted i.e col-1<0)
*/
bool Node::shiftSpaceLeft()
{
    int r,c;
    this->findSpaceIndex(r,c);
    if(c-1>=0)
    {
        std::swap(this->state[r][c],this->state[r][c-1]);
        return true;
    }
    return false;
}

/*
    This will shift the space to the right if its possible and return true.
    Will otherwise return false (if the col+1 >=3)
*/
bool Node::shiftSpaceRight()
{
    int r,c;
    this->findSpaceIndex(r,c);
    if(c+1<COL)
    {
        std::swap(this->state[r][c],this->state[r][c+1]);
        return true;
    }
    return false;
}


/*
    This will shift space to upper column and return true.Will return false
    if r-1<0
*/

bool Node::shiftSpaceUP()
{
    int r,c;
    this->findSpaceIndex(r,c);
    if(r-1>=0)
    {
        std::swap(this->state[r][c],this->state[r-1][c]);
        return true;
    }
    return false;
}

/*
    This will shift space to lower column and reutrn true. Will return false
    if r+1>=3
*/

bool Node::shiftSpaceDown()
{
    int r,c;
    this->findSpaceIndex(r,c);
    if(r+1<ROW)
    {
        std::swap(this->state[r][c],this->state[r+1][c]);
        return true;
    }
    return false;
}

/*
    This method will simply test hte node against the goal sequence
    and return true if the current node state is indeed equal to our 
    goal state otherwise it will return false
*/
bool Node::isGoalNode()
{
    char goal[ROW][COL] = {{'P','A','K'},{'I','S','T'},{'A','N',' '}};
    bool isGoalNode = true;
    for(int i=0;i<ROW;i++)
    {
        for(int j=0;j<COL;j++)
        {
            if(goal[i][j]!=this->state[i][j])
            {
                isGoalNode = false;
            }
        }
    }
    return isGoalNode;
}

/*
    This will simply print the  state of the node
*/

void Node::printNodeState()
{
    switch(this->op)
    {
        case ROOT:
        {
            cout<<"Root Node"<<endl;
            break;
        }
        case LEFT:
        {
            cout<<"Left Operation Node"<<endl;
            break;
        }
        case RIGHT:
        {
            cout<<"Right Operation Node"<<endl;
            break;
        }
        case UP:
        {
            cout<<"UP Operation Node"<<endl;
            break;
        }
        case DOWN:
        {
            cout<<"Down Operation Node"<<endl;
            break;
        }
    }
    for(int i=0;i<ROW;i++)
    {
        cout<<" | ";
        for(int j=0;j<COL;j++)
        {
            cout<<state[i][j]<<" "<<"|";
        }
        cout<<endl;
    }
    cout<<endl;
}

/*
 * This will return our state as a string - pretty useful for printing paths and i have used it extensively in my algorithms implemenations
 * */

void Node::stateToString(string & s)
{
    s.clear();
    for(int i=0;i<ROW;i++)
    {
        for(int j=0;j<COL;j++)
        {
            s+=this->state[i][j];
        }
    }
}

/*
 * Simple Setter Function for State Array
 * */
void Node::setState(string state)
{
    int counter =0;
    for(int i=0;i<ROW;i++)
    {
        for(int j=0;j<COL;j++)
        {
            this->state[i][j] = state[counter++];
        }
    }
}

/* Tree Function */
Tree::Tree()
{
    this->root = new Node();
    this->root->left = NULL;
    this->root->right = NULL;
    this->root->up = NULL;
    this->root->down = NULL;
    this->root->depth = 0;
}

/*  Tree Generation with Depth Limitation - I am using BFS
    for generating the tree - This function will generate tree up to the depth limit
    that we pass to it. Order of Generation is Left, Up, Down, Right - same is the case in the Algorithms
*/
void Tree::generate_Tree(int depth)
{
    queue <Node *> myQueue;
    myQueue.push(this->root);   
    this->root->depth = 0;
    this->root->op = ROOT;
    while(!myQueue.empty())
    {
        //Get the first node from Queue
        //Then make its left, right, up,down!
        Node * myNode = myQueue.front();
        myQueue.pop();
        if(myNode->depth>=depth)
        {
            continue;
        }
        myNode->left = new Node();
        myNode->left->left=NULL;
        myNode->left->right = NULL;
        myNode->left->up = NULL;
        myNode->left->down = NULL;
        myNode->left->copyState(myNode);
        
        if(myNode->left->shiftSpaceLeft())
        {
            myNode->left->op = LEFT;
            myNode->left->depth = myNode->depth+1;
            myQueue.push(myNode->left);
        }
        else
        {
            myNode->left = NULL;
        }
        
        myNode->right = new Node();
        myNode->right->left=NULL;
        myNode->right->right = NULL;
        myNode->right->up = NULL;
        myNode->right->down = NULL;
        myNode->right->copyState(myNode);
        if(myNode->right->shiftSpaceRight())
        {
            myNode->right->op = RIGHT;
            myNode->right->depth = myNode->depth+1;
            myQueue.push(myNode->right);
        }
        else
        {
            myNode->right = NULL;
        }
        
        myNode->up = new Node();
        myNode->up->left=NULL;
        myNode->up->right = NULL;
        myNode->up->up = NULL;
        myNode->up->down = NULL;
        myNode->up->copyState(myNode);
        if(myNode->up->shiftSpaceUP())
        {
            myNode->up->op = UP;
            myNode->up->depth = myNode->depth+1;
            myQueue.push(myNode->up);
        }
        else
        {
            myNode->up = NULL;
        }
        myNode->down = new Node();
        myNode->down->left=NULL;
        myNode->down->right = NULL;
        myNode->down->up = NULL;
        myNode->down->down = NULL;
        myNode->down->copyState(myNode);
        if(myNode->down->shiftSpaceDown())
        {
            myNode->down->op = DOWN;
            myNode->down->depth = myNode->depth+1;
            myQueue.push(myNode->down);
        }
        else
        {
            myNode->down = NULL;
        }
    }
}

//For Tree Generation - I am using BFS for generating the 
//search tree..This method will continue to generate a tree
//until a solution/goal node has been generated at which point
//it will return
void Tree::generate_Tree()
{
    queue <Node *> myQueue;
    myQueue.push(this->root);
    this->root->op = ROOT;
    this->root->depth = 0;
    while(!myQueue.empty())
    {

        //Get the first node from Queue
        //Then make its left, right, up,down!
        Node * myNode = myQueue.front();
        myQueue.pop();
        if(myNode->isGoalNode())
        {
            //cout<<"Goal Node Found - Terminating Tree Generation!"<<endl;
            return;
        }
        if(myNode->depth>=8) //Don't go beyond depth of 8 as the number of nodes become way too much - TODO: Implement better algorithms for higher depth
        {
            continue;
        }
        myNode->left = new Node();
        myNode->left->left=NULL;
        myNode->left->right = NULL;
        myNode->left->up = NULL;
        myNode->left->down = NULL;
        myNode->left->copyState(myNode);
        
        if(myNode->left->shiftSpaceLeft())
        {
            myNode->left->op = LEFT;
            myNode->left->depth = myNode->depth+1;
            if(myNode->left->isGoalNode())
            {
               // cout<<"Goal Node Found - Terminating Tree Generation!";
                //cout<<endl;
                return;
            }
            myQueue.push(myNode->left);
        }
        else
        {
            myNode->left = NULL;
        }
        
        myNode->up = new Node();
        myNode->up->left=NULL;
        myNode->up->right = NULL;
        myNode->up->up = NULL;
        myNode->up->down = NULL;
        myNode->up->copyState(myNode);
        if(myNode->up->shiftSpaceUP())
        {
            myNode->up->op = UP;
            myNode->up->depth = myNode->depth+1;
            if(myNode->up->isGoalNode())
            {
                //cout<<"Goal Node Found - Terminating Tree Generation!";
                //cout<<endl;
                return;
            }
            myQueue.push(myNode->up);
        }
        else
        {
            myNode->up = NULL;
        }
        myNode->down = new Node();
        myNode->down->left=NULL;
        myNode->down->right = NULL;
        myNode->down->up = NULL;
        myNode->down->down = NULL;
        myNode->down->copyState(myNode);
        if(myNode->down->shiftSpaceDown())
        {
            myNode->down->op = DOWN;
            myNode->down->depth = myNode->depth+1;
            if(myNode->down->isGoalNode())
            {
                //cout<<"Goal Node Found - Terminating Tree Generation!";
                //cout<<endl;
                return;
            }
            myQueue.push(myNode->down);
        }
        else
        {
            myNode->down = NULL;
        }
        
        
        myNode->right = new Node();
        myNode->right->left=NULL;
        myNode->right->right = NULL;
        myNode->right->up = NULL;
        myNode->right->down = NULL;
        myNode->right->copyState(myNode);
        if(myNode->right->shiftSpaceRight())
        {
            myNode->right->op = RIGHT;
            myNode->right->depth = myNode->depth+1;
            if(myNode->right->isGoalNode())
            {
                //cout<<"Goal Node Found - Terminating Tree Generation!";
                //cout<<endl;
                return;
            }
            myQueue.push(myNode->right);
        }
        else
        {
            myNode->right = NULL;
        }
        
    }
}

//Order Level Traversal of Tree (BFS)
void Tree::print_Tree()
{
    queue <Node *> myQueue;
    myQueue.push(this->root);
    while(!myQueue.empty())
    {
        Node * myNode = myQueue.front();
        myQueue.pop();
        
        myNode->printNodeState();
        if(myNode->left!=NULL)
        {
            myQueue.push(myNode->left);
        }
        if(myNode->up!=NULL)
        {
            myQueue.push(myNode->up);
        }
        if(myNode->down!=NULL)
        {
            myQueue.push(myNode->down);
        }
        if(myNode->right!=NULL)
        {
            myQueue.push(myNode->right);
        }
    }
}

/*
 * Mam, I couldn't figure out a way to output the tree nicely on console so after spending couple of days and researching -I found a better way - There is a program called Graphwiz its like latex for Graphs/Trees
 * and it has specific syntax and then it can generate graph/tree images from that syntax - So i've simply output my graph in that syntax in a file and then run that file through Graphwiz Interpreter
 * to get our tree visuzlied. That way, our entire tree is now serialiazble to Graph Dot Format :)
 */

void Tree::print_TreeWiz()
{
    Node * Tree = this->root;
    ofstream fio;
    fio.open("tree.dot");
    if(!fio.is_open())
    {
        QMessageBox alert;
        alert.setText("Tree has been Generated :)");
        alert.exec();
    }
    fio<<"digraph ai {"<<endl;
    fio<<"graph [	size=\"40,40\",ratio=\"fill\",orientation=portrait ];"<<endl;
    fio<<"node [color=lightblue2, style=filled];"<<endl;
    queue <Node *> myQueue;
    myQueue.push(Tree);
    string parent;
    /*
    Mam Here I am generating unique labels for each node
    because graphwhiz by defaults consider every node part of a graph
    so if we create two duplicated states it will connect them together
    so we need to distinigush between duplicate states using unique           labels
    */
    int counter  = 0;
    while(!myQueue.empty())
    {
        Node * myNode = myQueue.front();
        myQueue.pop();
        myNode->stateToString(parent);
        myNode->label =  "node" + std::to_string(++counter);
        fio<<myNode->label<<" [label=\""<<parent<<"\" ]"<<endl;
        if(myNode->left!=NULL)
        {
            myQueue.push(myNode->left);
        }
        if(myNode->up!=NULL)
        {
            myQueue.push(myNode->up);
        }
        if(myNode->down!=NULL)
        {
            myQueue.push(myNode->down);
        }
        if(myNode->right!=NULL)
        {
            myQueue.push(myNode->right);
        }
    }

    myQueue.push(Tree);

    while(!myQueue.empty())
    {
        Node * myNode = myQueue.front();
        myQueue.pop();
        myNode->stateToString(parent);
        if(myNode->left!=NULL)
        {
            myQueue.push(myNode->left);
            fio<<myNode->label<<" -> "<<myNode->left->label;
            fio<<" [ label=\"left\"] "<<endl;
        }
        if(myNode->up!=NULL)
        {
            myQueue.push(myNode->up);
            fio<<myNode->label<<" -> "<<myNode->up->label;
            fio<<" [ label=\"up\"] "<<endl;

        }
        if(myNode->down!=NULL)
        {
            myQueue.push(myNode->down);
            fio<<myNode->label<<" -> "<<myNode->down->label;
            fio<<" [ label=\"down\"] "<<endl;

        }
        if(myNode->right!=NULL)
        {
            myQueue.push(myNode->right);
            fio<<myNode->label<<" -> "<<myNode->right->label;
            fio<<" [ label=\"right\"] "<<endl;

        }
    }
    fio<<"}"<<endl;
    fio.close();
}

/* Will return root node so tree can be utilized in our algorithms 
*/
Node * Tree::getTree()
{
    return root;
}

