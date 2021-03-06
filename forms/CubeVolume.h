#ifndef CUBEVOLUME_H
#define CUBEVOLUME_H

#include <deque>

#include "VolumeForm.h"

class CubeVolume :
    public VolumeForm
{
    protected:
        float width;
        float height;
        float depth;

    public:
        /** Default constructor */
        CubeVolume( vec3 center, float w, float h, float d );
        /** Default destructor */
        virtual ~CubeVolume();

        float getWidth();
        float getHeight();
        float getDepth();

        std::deque<vec3> getVertices();

        bool pointInside( vec3 point );
        CubeVolume getBoundingBox();
};

#endif // CUBEVOLUME_H
