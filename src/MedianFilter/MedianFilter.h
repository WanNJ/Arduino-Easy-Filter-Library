/**
 * Created by Jack Wan on 5/7/18.
 */

#ifndef ARDUINO_EASY_FILTER_LIBRARY_MEDIANFILTER_H
#define ARDUINO_EASY_FILTER_LIBRARY_MEDIANFILTER_H

#include "../EasyFilter.h"
#include "../utils/sort.h"

class MedianFilter : public Filter {
private:
    int _currentSize;
    int _bufSize;
    double* _data;

public:
    // Default n equals 3.
    MedianFilter();
    // Use `explicit` to avoid unintentional conversion.
    explicit MedianFilter(int n);
    double doFilter(double data) override;
    ~MedianFilter();
};

#endif //ARDUINO_EASY_FILTER_LIBRARY_MEDIANFILTER_H
