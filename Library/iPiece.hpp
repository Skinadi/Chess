#pragma once
class iPiece
{
private:
    char id;
public:
    virtual void move(int x, int y);
    char operator[](int a) {return id;};
    iPiece(/* args */);
    ~iPiece();
};

