
#ifndef Tetronimo_h
#define Tetronimo_h

#include <stdio.h>
#include <vector>
#include <iostream>
#include "Grid.h"
#include "Rect.h"
#include "Pairs.h"

enum tMoShape
{
    tShape,
    lShape,
    mlShape,
    sShape,
    zShape,
    sqShape,
    iShape,
    testShape
};
enum Color
{
    red,
    green,
    yellow
};
enum tMoVersion
{
    v1,
    v2,
    v3,
    v4
};

using namespace std;

class Tetromino
{
public:
    vector<vector<Rect *>> tMosData;
    tMoShape shape;
    tMoVersion version;
    vector<vector<vector<Pairs *>>> models;

    float width;
    float height;

    int xMin;
    int xMax;
    int yMin;
    int yMax;

    int gi;
    int gj;

    Tetromino();
    void setShapeAndRotation();
    void draw();
    void clear();
    void rotate();
    bool validPos();
    void setupFrame();
    int nextAction(Grid *grid, int, int);
    bool canContinueGoingUp(Grid *grid);
    void nextVersion(Grid *);
    void shiftOffset(int, int);
    void shiftOffsetX(Grid *grid, int val);
    void shiftOffsetY(Grid *grid, int val);
    bool canShiftX(Grid *grid, int);
    bool canShift(Grid *grid, int, int);
    int outsideRects();
    void generateModels();
    void insertIntoGrid(Grid *grid);
    void reset();
    ~Tetromino();
};

#endif /* Tetronimo_hpp */
