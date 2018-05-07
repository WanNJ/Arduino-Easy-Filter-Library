/**
 * Created by Jack Wan on 5/7/18.
 */

#include "MedianFilter.h"

MedianFilter::MedianFilter(int n) {
    _currentSize = 0;
    _bufSize = n;
    _buf = new double[n];
}

MedianFilter::MedianFilter() {
    _currentSize = 0;
    _bufSize = 3;
    _buf = new double[3];
}

MedianFilter::~MedianFilter() {
    delete _buf;
}

/**
 * DoFilter method.
 * @param data Raw signal value.
 * @return -1 if no output is generated, otherwise the filtered value.
 */
double MedianFilter::doFilter(double data) {
    if(_currentSize < _bufSize)
        _buf[_currentSize++] = data;

    if(_currentSize == _bufSize) {
        _currentSize = 0;
        selectSort(_buf, _bufSize);
        return (_buf[(_bufSize - 1) / 2] + _buf[(_bufSize + 1) / 2])/2;
    }

    return -1;
}