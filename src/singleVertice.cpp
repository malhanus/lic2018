#include "singleVertice.h"

singleVertice::singleVertice()
{
    //ctor
}

singleVertice::singleVertice(float pozX, float pozY, float pozZ, float normX, float normY, float normZ, float tcX, float tcY)
{
    this->pozX = pozX;
    this->pozY = pozY;
    this->pozZ = pozZ;
    this->normX = normX;
    this->normY = normY;
    this->normZ = normZ;
    this->tcX = tcX;
    this->tcY = tcY;
}

singleVertice::~singleVertice()
{
    //dtor
}

void singleVertice:: setPozX (float x )
{
    pozX=x;

}
void singleVertice:: setPozY (float y )
{
    pozY=y;
}
void singleVertice:: setPozZ (float z )
{
    pozZ=z;
}
void singleVertice:: setNormX (float x)
{
    normX=x;
}
void singleVertice:: setNormY (float y)
{
    normY=y;
}
void singleVertice:: setNormZ (float z)
{
    normZ=z;
}
void singleVertice:: setTcX (float x )
{
    tcX=x;
}
void singleVertice:: setTcY (float y )
{
    tcY=y;
}

float singleVertice:: getPozX ()
{
    return pozX;

}
float singleVertice:: getPozY ()
{
    return pozY;
}
float singleVertice:: getPozZ ()
{
    return pozZ;
}
float singleVertice:: getNormX ()
{
    return normX;
}
float singleVertice:: getNormY ()
{
    return normY;
}
float singleVertice:: getNormZ ()
{
    return normZ;
}
float singleVertice:: getTcX ()
{
    return tcX;
}
float singleVertice:: getTcY ()
{
    return tcY;
}
