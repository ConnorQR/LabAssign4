#include <vector>
#include <ncurses.h>
#include <cstring>
#include <iostream>
#include "Prog2_files"
using namespace std;


using Vec = vector<char>;
using Mat = vector<Vec>;

extern int N;
extern int n;
extern Mat M;
extern Mat M2;
extern Mat M3;
extern Mat temp;

extern bool isValidPos(int i, int j);
extern int NeighborCheck(int i, int j, Mat M);
extern Mat Neighbor(Mat M, Mat M2);
extern void Printmat(Mat M);
extern void GameSpace();
extern Mat Click(Mat M);

int main (){

GameSpace();

    return 0;
}