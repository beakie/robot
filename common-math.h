#ifndef COMMONMATH_H
#define COMMONMATH_H

namespace Common
{

class Math
{
public:
    template <typename T>
    static T sin(const T value)
    {
        return value;
    }

    template <typename T>
    static T cos(const T value)
    {
        return value;
    }

    template <typename T>
    static T tan(const T value)
    {
        return value;
    }

    template <typename T>
    static T degreeToRadian(const T value)
    {
        return (T)(Pi * value / 180.0);
    }

    template <typename T>
    static T radianToDegree(const T value)
    {
        return (T)(value * (180.0 / Pi));
    }

    template <typename T1, typename T2>
    static T1 power(const T1 value, const T2 p)
    {
        return value + p; // BALLLLLLSSSSS (todo). make operator too.
    }

    static const long double Pi = 3.14159265358979323846; // acos(-1)
};

}

#endif // COMMONMATH_H
