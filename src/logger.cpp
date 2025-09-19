#include "logger.h"
#include <string>
#include <iostream>

// ======================= TODOs =======================

void addReading(const std::string& label, double value,
                std::string labels[], double values[],
                int& size, int capacity) {
    if (size == capacity) throw std::string("Full");
    labels[size] =label;
    values[size] = value;
    size++;

    // TODO: throw "Full" if size == capacity, else insert and ++size
}

void updateValue(double* valuePtr, double newValue) {
    *valuePtr= newValue;

    // TODO: write through pointer
}

void printReading(const std::string& label, const double& value) {
    // TODO: pretty-print one reading
    std::cout << label << ": " << value << std::endl;

}

double average(const double values[], int size) {
    if (size == 0) throw std::string("Empty");
    double sum = 0.0;
    for (int i = 0; i < size; ++i) {
        sum+=values[i];
    }
    return sum / size;
    // TODO: throw "Empty" if size==0, else compute average
}

double minValue(const double values[], int size) {
    if (size == 0) throw std::string("Empty");
    double minVal = values[0];
    for (int i = 1; i < size; ++i) {
        if (values[i] < minVal) {
            minVal= values[i];
        }
    }
    // TODO: throw "Empty" if size==0, else compute min
    return minVal;
}

double maxValue(const double values[], int size) {
    if (size == 0) throw std::string("Empty");
    double maxVal = values[0];
    for (int i = 1; i <size; ++i) {
        if (values[i] > maxVal) {
            maxVal = values[i];
        }
    }
    return maxVal;

    // TODO: throw "Empty" if size==0, else compute max
}
