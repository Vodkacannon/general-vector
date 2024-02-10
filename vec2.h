#include <cmath>
namespace gv {
template <typename T>
struct vec2<T> {
    T x;
    T y;
};

template <typename T>
vec2<T> operator=(const vec2<T>& rhs) {
    return vec2<T> { rhs.x, rhs.y };
}

template <typename T>
bool operator==(vec2<T> lhs, vec2<T> rhs) {
    if (lhs.x == rhs.x && lhs.y == rhs.y) return true;
    return false;
}

template <typename T>
T length(const vec2<T>& vec) {
    return sqrt(vec.x * vec.x + vec.y * vec.y);
}
}

