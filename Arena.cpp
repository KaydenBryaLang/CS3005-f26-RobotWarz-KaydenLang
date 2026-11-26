#include "Arena.h"



Arena::Arena(int rows, int cols, int rounds, double sleepinterval, int flames, int pits, int mounds);
int Arena::getNumRows();
int Arena::getNumCols();
void Arena::addRobot(RobotBase robot);
void Arena::robotCompiler();
int Arena::gameloop();
