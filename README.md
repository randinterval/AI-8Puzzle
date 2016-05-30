# AI-8Puzzle

A solution to 8 Puzzle type problem through various search algorithms like DFS, BFS, Iterative Depth First Search.

# Tree Generation

Tree is generated through BFS i.e level wise generation

# Algorithms

The following algorithms have been implemented to solve the problem

* DFS
* BFS
* IDS

Also implemented AStar

# Tree Printing Visualization

Tree is visualized through Graphwhiz i.e the tree is serialized to dot format and than the dot file is parsed through Graphwhiz Compiler
to generate tree image which is then invoked by our program.

# Dependencies

* Qt Compiler
* Qt Runtime
* Graphwhiz
* POSIX Threads (For Multithreading, I've used POSIX Threads rather than Qt's built in threading options..)

#How to run the program

Use the attached makefile to run the program. 
* To Compile simply type make and the default target will compile the program from source and generate executable
* To run the program, simply use the run target like so: make run
* To cleanup the binaries, simply type make clean




