/**
 * Created by Jack Wan on 5/7/18.
 * Modulo Arithmetic Low Pass Filter.
 * See https://www.nxp.com/docs/en/application-note/AN4248.pdf for more information.
 */

#ifndef ARDUINO_EASY_FILTER_LIBRARY_SIMPLELOWPASSFILTER_H
#define ARDUINO_EASY_FILTER_LIBRARY_SIMPLELOWPASSFILTER_H

#include "../Filter.h"

class SimpleLowPassFilter : public Filter {
private:
    // _alpha should be in the range of (0, 1).
    double _alpha;
    double _prev;

public:
    // Default value of `alpha` equals 0.5.
    SimpleLowPassFilter();
    // Use `explicit` to avoid unintentional conversion.
    explicit SimpleLowPassFilter(double alpha);
    double doFilter(double data) override;
};

#endif //ARDUINO_EASY_FILTER_LIBRARY_SIMPLELOWPASSFILTER_H
