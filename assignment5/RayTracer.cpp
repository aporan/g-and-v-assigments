#include "RayTracer.h"
#include "Camera.h"
#include "Ray.h"
#include "Hit.h"
#include "Group.h"
#include "Material.h"
#include "Light.h"

#define EPSILON 0.001

//IMPLEMENT THESE FUNCTIONS
//These function definitions are mere suggestions. Change them as you like.
Vector3f mirrorDirection( const Vector3f& normal, const Vector3f& incoming)
{
}

bool transmittedDirection( const Vector3f& normal, const Vector3f& incoming, 
        float index_n, float index_nt, 
        Vector3f& transmitted)
{

}

RayTracer::RayTracer( SceneParser * scene, int max_bounces, bool shadows) : scene(scene), shadows(shadows) {
  group = scene->getGroup();
  camera = scene->getCamera();
}

RayTracer::~RayTracer()
{
}


Vector3f RayTracer::traceRay(Ray &ray, Hit &hit) const {
    return this->traceRay(ray, camera->getTMin(), m_maxBounces, 1, hit);
}

Vector3f RayTracer::traceRay( Ray& ray, float tmin, int bounces,
        float refr_index, Hit &hit) const
{
  hit = Hit( FLT_MAX, NULL, Vector3f( 0, 0, 0 ) );
  return Vector3f(0,0,0);
}

