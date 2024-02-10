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

template <typename T>
bool operator==(vec2<T> lhs, vec2<T> rhs) {
    if (lhs.x == rhs.x && lhs.y == rhs.y) return true;
    return false;
}