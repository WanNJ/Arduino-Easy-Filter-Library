/**
 * Created by Jack Wan on 5/7/18.
 * Abstract base class definition.
 */

#ifndef ARDUINO_EASY_FILTER_LIBRARY_FILTER_H
#define ARDUINO_EASY_FILTER_LIBRARY_FILTER_H

class Filter {
public:
    Filter();

    // Pure virtual function.
    virtual double doFilter(double data) = 0;
};
#endif //ARDUINO_EASY_FILTER_LIBRARY_FILTER_H
