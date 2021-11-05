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
    BinaryImage& operator=(const BinaryImage& other) {
        if (this == &other)
            return *this;
        if (cols != other.cols || rows != other.rows) {
            if (data) {
                for (int i = 0; i < rows; ++i)
                    if (data[i])
                        delete[] data[i];
                delete[] data;
            }
            cols = other.cols;
            rows = other.rows;
            data = new bool* [rows];
            for (int i = 0; i < rows; ++i)
                data[i] = new bool[cols];
            for (int i = 0; i < rows; ++i)
                for (int j = 0; j < cols; ++j)
                    data[i][j] = other.data[i][j];
        }
        return *this;
    }
    bool operator==(const BinaryImage& rhs) {
        if (cols != rhs.cols || rows != rhs.rows)
            return false;
        bool res = true;
        for (int i = 0; i < rows; ++i)
            for (int j = 0; j < cols; ++j)
                if (data[i][j] != rhs.data[i][j]) {
                    res = false;
                    break;
                }
        return res;
    }
    bool operator!=(const BinaryImage& rhs)
    {
        return !(*this == rhs);

    }
    bool operator()(int i, int j) const {
        if (!(i >= 0 && i < rows && j >= 0 && j < cols)) {
            throw "Error";
        }
        return data[i][j];
    }

    bool& operator()(int i, int j) {
        if (!(i >= 0 && i < rows && j >= 0 && j < cols)) {
            throw "Error";
        }
        return data[i][j];
    }

    void operator!() {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                if (data[i][j] == true)
                    data[i][j] = false;
                else
                    data[i][j] = true;
            }
        }
    }

    BinaryImage& operator*(const BinaryImage& rhs) {
        if (rows != rhs.rows || cols != rhs.cols) {
            throw "Error";
        }
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                if (data[i][j] == true && rhs.data[i][j] == true)
                    data[i][j] = true;
                else
                    data[i][j] = false;
            }
        }
        return *this;
    }

    BinaryImage& operator*(bool value) {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                if (data[i][j] == true && value == true)
                    data[i][j] = true;
                else
                    data[i][j] = false;
            }
        }
        return *this;
    }


    BinaryImage& operator+(const BinaryImage& rhs) {
        if (rows != rhs.rows || cols != rhs.cols) {
            throw"Error";
        }
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                if (data[i][j] == false && rhs.data[i][j] == false)
                    data[i][j] = false;
                else
                    data[i][j] = true;
            }
        }
        return *this;
    }

    BinaryImage& operator+(bool value) {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                if (data[i][j] == false && value == false)
                    data[i][j] = false;
                else
                    data[i][j] = true;
            }
        }
        return *this;
    }
};

#endif /* BinaryImage_h */