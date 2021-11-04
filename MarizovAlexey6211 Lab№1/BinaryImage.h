#ifndef BinaryImage_h
#define BinaryImage_h
class BinaryImage {
private:
    bool** data;
    int cols;
    int rows;
public:
    BinaryImage() : data(nullptr), cols(0), rows(0) {}
    BinaryImage(int cols, int rows) : cols(cols), rows(rows), data(new bool* [rows]) {
        for (int i = 0; i < rows; ++i)
            data[i] = new bool[cols];
    }
};

#endif /* BinaryImage_h */