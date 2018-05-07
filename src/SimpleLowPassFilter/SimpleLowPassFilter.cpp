/**
 * Created by Jack Wan on 5/7/18.
 */

#include "SimpleLowPassFilter.h"

SimpleLowPassFilter::SimpleLowPassFilter(double alpha) {
    _alpha = alpha;
    _prev = -1;
}

SimpleLowPassFilter::SimpleLowPassFilter() {
    _alpha = 0.5;
    _prev = -1;
}

/**
 * DoFilter method.
 * @param data Raw signal value.
 * @return -1 if no output is generated, otherwise the filtered value.
 */
double SimpleLowPassFilter::doFilter(double data) {
    if(_prev < 0)
        _prev = data;
    else
        _prev = (1.0 - _alpha) * _prev + _alpha * data;

    return _prev;
}