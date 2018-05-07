/**
 * Created by Jack Wan on 5/7/18.
 */

#include "AverageFilter.h"


AverageFilter::AverageFilter(int n) {
    _currentSize = 0;
    _bufSize = n;
    _sum = 0;
}

AverageFilter::AverageFilter() {
    _currentSize = 0;
    _bufSize = 3;
    _sum = 0;
}

/**
 * DoFilter method.
 * @param data Raw signal value.
 * @return -1 if no output is generated, otherwise the filtered value.
 */
double AverageFilter::doFilter(double data) {
    if(_currentSize < _bufSize) {
        _sum += data;
        _currentSize++;
    }

    if(_currentSize == _bufSize) {
        _currentSize = 0;
        double sum = _sum;
        _sum = 0;
        return sum/_bufSize;
    }

    return -1;
}