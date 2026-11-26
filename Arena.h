#pragma once
#include <string>
#include <vector>

class Arena
{
Private:
int m_board_row_max;
int m_board_col_max;
int m_rounds;
double m_sleepinterval;
bool m_active;
int m_flames;
int m_pits;
int m_mounds;

std::vector<RobotBase> RobotBay;
std::vector<std::vector<std::string>> m_grid;

Public:
Arena(int rows, int cols, int rounds, double sleepinterval, int flames, int pits, int mounds);
int getNumRows();
int getNumCols();
void addRobot(RobotBase robot);
void robotCompiler();
int gameloop();





};


