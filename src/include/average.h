/*
 *    Copyright (c) 2015
 *      SMASH Team
 *
 *    GNU General Public License (GPLv3 or later)
 */

#ifndef SRC_INCLUDE_AVERAGE_H_
#define SRC_INCLUDE_AVERAGE_H_

#include <cstdint>
#include <stdexcept>
#include <utility>
#include <vector>

/// Represent an average value.
template <typename T>
class Average {
    public:
        Average() : avg_(0), n_(0) {};

        /// Add a value to the set of numbers defining the average.
        void add(T x) {
            avg_ = (avg_ * n_ + x) / (n_ + 1);
            n_++;
        }

        /// Current average.
        T average() const {
            return avg_;
        }

        /// Number of values used to calculate the average.
        uint64_t number_of_values() const {
            return n_;
        }

        /// Reset the average to 0.
        void clear() {
            avg_ = 0;
            n_ = 0;
        }
    private:
        T avg_;
        uint64_t n_;
};

/// Remove duplicates from data (x, y) by averaging y.
///
/// Assumes (x, y) is sorted.
template <typename T>
std::pair<std::vector<T>, std::vector<T>> dedup_avg(
        const std::vector<T>& x, const std::vector<T>& y) {
    if (x.size() != y.size()) {
        throw std::runtime_error("x and y have to be of same size.");
    }
    if (x.size() < 1) {
        throw std::runtime_error("x cannot be empty.");
    }
    std::vector<T> new_x;
    new_x.reserve(x.size());
    std::vector<T> new_y;
    new_y.reserve(y.size());
    Average<T> avg;
    T prev_x = x[0];
    for (size_t i = 0; i < x.size(); i++) {
        #pragma GCC diagnostic push
        #pragma GCC diagnostic ignored "-Wfloat-equal"
        if (x[i] == prev_x) {
        #pragma GCC diagnostic pop
            avg.add(y[i]);
        } else {
            new_x.push_back(x[i - 1]);
            new_y.push_back(avg.average());
            avg.clear();
            avg.add(x[i]);
            prev_x = x[i];
        }
    }
    new_x.push_back(x.back());
    new_y.push_back(avg.average());
    return std::make_pair(std::move(new_x), std::move(new_y));
}

#endif  // SRC_INCLUDE_AVERAGE_H_
