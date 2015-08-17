#include "Algorithms.h"
#include "QMessageBox"

/*
 *
 * Implemenation of the various Algorithms - In each case, I've specified success/failure on the basis of return value (true if sucess, else false) and the path is returned in a queue that must be passed
 * by reference to the algorithms - note that, queue should be using standard template library container :)
 *
 * */
//This will apply standard BFS algorithm on our search tree to find
//the goal node if its found then it will print the path to goal node
//and return true otherwise it will show that goal node not found
//and return false
bool Algorithms::BFS(Node * Tree, queue<Node *> & Path)
{
    bool goalFound = false;
    queue <Node *> Frontier;
    Frontier.push(Tree);
    while(!Frontier.empty())
    {
        Node * TreeNode = Frontier.front();
        Frontier.pop();
        Path.push(TreeNode);
        if(TreeNode->isGoalNode())
        {
            goalFound = true;
            break;
        }
        if(TreeNode->left!=NULL)
        {
            Frontier.push(TreeNode->left);
        }
        if(TreeNode->up!=NULL)
        {
            Frontier.push(TreeNode->up);
        }
        if(TreeNode->down!=NULL)
        {
            Frontier.push(TreeNode->down);
        }
        if(TreeNode->right!=NULL)
        {
            Frontier.push(TreeNode->right);
        }
    }
    /*
     * Merged with GUI
    if(goalFound)
    {
        while(!Path.empty())
        {
            Node * pathNode = Path.front();
            pathNode->printNodeState();
            Path.pop();
        }
    }
    */
    return goalFound;
}

//This will apply standard DFS algorithm (with depth limitation) on our search tree to find
//the goal node if its found then it will print the path to goal node
//and return true otherwise it will show that goal node not found
//and return false
bool Algorithms::DFS(int depth,Node * Tree,queue<Node *> &Path)
{

    bool goalFound = false;
    stack <Node *> Frontier;
    Frontier.push(Tree);
    while(!Frontier.empty())
    {
        Node * TreeNode = Frontier.top();
        Frontier.pop();
        Path.push(TreeNode);
        string s;
        TreeNode->stateToString(s);
        if(TreeNode->isGoalNode())
        {
            goalFound = true;
            break;
        }
        if(TreeNode->depth>=depth)
        {
            continue;
        }
        if(TreeNode->right!=NULL)
        {
            Frontier.push(TreeNode->right);
        }
        if(TreeNode->down!=NULL)
        {
            Frontier.push(TreeNode->down);
        }
        if(TreeNode->up!=NULL)
        {
            Frontier.push(TreeNode->up);
        }
        if(TreeNode->left!=NULL)
        {
            Frontier.push(TreeNode->left);
        }
    }
    /*
     * Merged with GUI
    if(goalFound)
    {
        cout<<"Goal Node Found!"<<endl;
        while(!Path.empty())
        {
            Node * pathNode = Path.front();
            pathNode->printNodeState();
            Path.pop();
        }
    }
    */
    return goalFound;
}

//This will simply call DFS with a certain dfs limit so its a wrapper on top of
//the standard DFS algorithm 
bool Algorithms::DLS(int dlimit,Node * Tree,queue<Node *> &Path)
{
    return Algorithms::DFS(dlimit,Tree,Path);
}

//This will be smiliar to DLS in that it will simply call DFS but unlike DLS it will call
//dls in a loop for each level of the tree.
bool Algorithms::IDS(int maxDepth, Node * Tree,int & cutoff,queue<Node *> &Path)
{
    bool goalFound = false;
    for(int i=0;i<=maxDepth;i++)
    {
        if(DLS(i,Tree,Path))
        {
            cutoff = i;
            goalFound = true;
            break;
        }
        else
        {
            while(!Path.empty()) Path.pop();
        }
    }
    return goalFound;
}
