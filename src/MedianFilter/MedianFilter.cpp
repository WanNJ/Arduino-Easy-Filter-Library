/**
 * Created by Jack Wan on 5/7/18.
 */

#include "MedianFilter.h"

MedianFilter::MedianFilter(int n) {
    _currentSize = 0;
    _bufSize = n;
    _data = new double[n];
}

MedianFilter::MedianFilter() {
    _currentSize = 0;
    _bufSize = 3;
    _data = new double[3];
}

MedianFilter::~MedianFilter() {
    delete _data;
}

/**
 * DoFilter method.
 * @param data Raw signal value.
 * @return -1 if no output is generated, otherwise the filtered value.
 */
double MedianFilter::doFilter(double data) {
    if(_currentSize < _bufSize)
        _data[_currentSize++] = data;

    if(_currentSize == _bufSize) {
        _currentSize = 0;
        selectSort(_data, _bufSize);
        return (_data[(_bufSize - 1) / 2] + _data[(_bufSize + 1) / 2])/2;
    }

    return -1;
}