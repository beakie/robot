#ifndef COMMONSPACE3DROTATIONYXY_H
#define COMMONSPACE3DROTATIONYXY_H

#include "common-space3d-irotation.h"

namespace Common
{

namespace Space3d
{

struct EulerAnglesYXY: IRotation
{
    float Angle1;
    float Angle2;
    float Angle3;

    EulerAnglesYXY()
    {
    }

    EulerAnglesYXY(float angle1, float angle2, float angle3)
    {
        Angle1 = angle1;
        Angle2 = angle2;
        Angle3 = angle3;
    }

    Matrix4<float> getMatrix()
    {
        float c1 = Common::Math::cos(Angle1);
        float c2 = Common::Math::cos(Angle2);
        float c3 = Common::Math::cos(Angle3);
        float s1 = Common::Math::sin(Angle1);
        float s2 = Common::Math::sin(Angle2);
        float s3 = Common::Math::sin(Angle3);

        return Matrix4<float>(c1*c3-c2*s1*s3, s1*s2, c1*s3+c2*c3*s1, 0, s2*s3, c2, -c3*s2, 0, -c3*s1-c1*c2*s3, c1*s2, c1*c2*c3-s1*s2, 0, 0, 0, 0, 1);
    }

};

}

}

#endif // COMMONSPACE3DROTATIONYXY_H
