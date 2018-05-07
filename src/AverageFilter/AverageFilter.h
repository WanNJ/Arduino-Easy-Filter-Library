/**
 * Created by Jack Wan on 5/7/18.
 */

#ifndef ARDUINO_EASY_FILTER_LIBRARY_AVERAGEFILTER_H
#define ARDUINO_EASY_FILTER_LIBRARY_AVERAGEFILTER_H

#include "../Filter.h"

class AverageFilter : public Filter {
private:
    int _currentSize;
    int _bufSize;
    double _sum;

public:
    // Default _bufSize equals 3.
    AverageFilter();
    // Use `explicit` to avoid unintentional conversion.
    explicit AverageFilter(int n);
    double doFilter(double data) override;
};

#endif //ARDUINO_EASY_FILTER_LIBRARY_AVERAGEFILTER_H
