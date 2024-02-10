#include <cmath>

template <typename T>
struct vec2<T> {
    T x;
    T y;
};

template <typename T>
T length(const vec2<T>& vec) {
    return sqrt(vec.x * vec.x + vec.y * vec.y);
}