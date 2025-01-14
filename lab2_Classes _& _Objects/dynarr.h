#ifndef DYNARR_H_INCLUDED
#define DYNARR_H_INCLUDED
class dynArr
{
private:
    int **data;
    int rows;
    int col;
    //int size;
public:
    dynArr();
    dynArr(int r,int c);
    ~dynArr();
    void setValue(int r, int c, int value);
    int getValue(int r, int c);
    void allocate(int s);
};
#endif // DYNARR_H_INCLUDED
