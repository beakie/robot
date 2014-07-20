#ifndef COMMONPROJECTION3DWEAKPERSPECTIVEX_H
#define COMMONPROJECTION3DWEAKPERSPECTIVEX_H

#include "common-projection3d-iprojection.h"

namespace Common
{

namespace Projection3d
{

struct WeakPerspectiveX: IProjection
{
    float Scale;

    Matrix4<float> getMatrix()
    {
        return Matrix4<float>(0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1);
    }

    Common::Space2d::Plot getPlot(Common::Space3d::Coordinate coordinate)
    {
        return Common::Space2d::Plot(coordinate.values[1], coordinate.values[2]);
    }
};

}

}

#endif // COMMONPROJECTION3DWEAKPERSPECTIVEX_H
