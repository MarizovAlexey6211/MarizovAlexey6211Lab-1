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
    BinaryImage(const BinaryImage& rhs) : BinaryImage(rhs.cols, rhs.rows) {
        for (int i = 0; i < rows; ++i)
            for (int j = 0; j < cols; ++j)
                data[i][j] = rhs.data[i][j];

    }
    ~BinaryImage() {
        if (data) {
            for (int i = 0; i < rows; ++i)
                if (data[i])
                    delete[] data[i];
            delete[] data;
        }
    }

    double Ratio()
    {
        int count = 0;
        for (int i = 0; i < rows; ++i)
            for (int j = 0; j < cols; ++j)
                if (data[i][j] == true)
                    count++;
        return (double)count / (rows * cols);
    }

};

#endif /* BinaryImage_h */