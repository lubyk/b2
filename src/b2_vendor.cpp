/**
 *
 * MACHINE GENERATED FILE. DO NOT EDIT.
 *
 * Bindings for library b2
 *
 * This file has been generated by dub 2.1.~.
 */
#include "dub/dub.h"
#include "Box2D/Common/b2BlockAllocator.h"
#include "Box2D/Dynamics/b2Body.h"
#include "Box2D/Collision/b2BroadPhase.h"
#include "Box2D/Collision/Shapes/b2ChainShape.h"
#include "Box2D/Collision/Shapes/b2CircleShape.h"
#include "Box2D/Collision/b2Collision.h"
#include "Box2D/Dynamics/b2ContactManager.h"
#include "Box2D/Collision/b2Distance.h"
#include "Box2D/Common/b2Draw.h"
#include "Box2D/Collision/b2DynamicTree.h"
#include "Box2D/Collision/Shapes/b2EdgeShape.h"
#include "Box2D/Dynamics/b2Fixture.h"
#include "Box2D/Dynamics/b2Island.h"
#include "Box2D/Common/b2Math.h"
#include "Box2D/Collision/Shapes/b2PolygonShape.h"
#include "Box2D/Common/b2Settings.h"
#include "Box2D/Collision/Shapes/b2Shape.h"
#include "Box2D/Common/b2StackAllocator.h"
#include "Box2D/Collision/b2TimeOfImpact.h"
#include "Box2D/Dynamics/b2TimeStep.h"
#include "Box2D/Common/b2Timer.h"
#include "Box2D/Dynamics/b2World.h"
#include "Box2D/Dynamics/b2WorldCallbacks.h"

using namespace std;

extern "C" {
int luaopen_b2_BlockAllocator(lua_State *L);
int luaopen_b2_BodyDef(lua_State *L);
int luaopen_b2_Body(lua_State *L);
int luaopen_b2_Pair(lua_State *L);
int luaopen_b2_BroadPhase(lua_State *L);
int luaopen_b2_ChainShape(lua_State *L);
int luaopen_b2_CircleShape(lua_State *L);
int luaopen_b2_ContactFeature(lua_State *L);
int luaopen_b2_ContactID(lua_State *L);
int luaopen_b2_ManifoldPoint(lua_State *L);
int luaopen_b2_Manifold(lua_State *L);
int luaopen_b2_WorldManifold(lua_State *L);
int luaopen_b2_ClipVertex(lua_State *L);
int luaopen_b2_RayCastInput(lua_State *L);
int luaopen_b2_RayCastOutput(lua_State *L);
int luaopen_b2_AABB(lua_State *L);
int luaopen_b2_ContactManager(lua_State *L);
int luaopen_b2_DistanceProxy(lua_State *L);
int luaopen_b2_SimplexCache(lua_State *L);
int luaopen_b2_DistanceInput(lua_State *L);
int luaopen_b2_DistanceOutput(lua_State *L);
int luaopen_b2_Color(lua_State *L);
int luaopen_b2_Draw(lua_State *L);
int luaopen_b2_DynamicTree(lua_State *L);
int luaopen_b2_EdgeShape(lua_State *L);
int luaopen_b2_Filter(lua_State *L);
int luaopen_b2_FixtureDef(lua_State *L);
int luaopen_b2_FixtureProxy(lua_State *L);
int luaopen_b2_Fixture(lua_State *L);
int luaopen_b2_Island(lua_State *L);
int luaopen_b2_Vec2(lua_State *L);
int luaopen_b2_Vec3(lua_State *L);
int luaopen_b2_Mat22(lua_State *L);
int luaopen_b2_Mat33(lua_State *L);
int luaopen_b2_Rot(lua_State *L);
int luaopen_b2_Transform(lua_State *L);
int luaopen_b2_Sweep(lua_State *L);
int luaopen_b2_PolygonShape(lua_State *L);
int luaopen_b2_Version(lua_State *L);
int luaopen_b2_MassData(lua_State *L);
int luaopen_b2_Shape(lua_State *L);
int luaopen_b2_StackEntry(lua_State *L);
int luaopen_b2_StackAllocator(lua_State *L);
int luaopen_b2_TOIInput(lua_State *L);
int luaopen_b2_TOIOutput(lua_State *L);
int luaopen_b2_Profile(lua_State *L);
int luaopen_b2_TimeStep(lua_State *L);
int luaopen_b2_Position(lua_State *L);
int luaopen_b2_Velocity(lua_State *L);
int luaopen_b2_SolverData(lua_State *L);
int luaopen_b2_Timer(lua_State *L);
int luaopen_b2_World(lua_State *L);
int luaopen_b2_DestructionListener(lua_State *L);
int luaopen_b2_ContactFilter(lua_State *L);
int luaopen_b2_ContactImpulse(lua_State *L);
int luaopen_b2_ContactListener(lua_State *L);
int luaopen_b2_QueryCallback(lua_State *L);
int luaopen_b2_RayCastCallback(lua_State *L);
}

/** bool b2PairLessThan(const b2Pair &pair1, const b2Pair &pair2)
 * vendor/Box2D/Box2D/Collision/b2BroadPhase.h:133
 */
static int b2_b2PairLessThan(lua_State *L) {
  try {
    b2Pair *pair1 = *((b2Pair **)dub_checksdata(L, 1, "b2.Pair"));
    b2Pair *pair2 = *((b2Pair **)dub_checksdata(L, 2, "b2.Pair"));
    lua_pushboolean(L, b2PairLessThan(*pair1, *pair2));
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "b2.PairLessThan: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "b2.PairLessThan: Unknown exception");
  }
  return lua_error(L);
}

/** void b2CollideCircles(b2Manifold *manifold, const b2CircleShape *circleA, const b2Transform &xfA, const b2CircleShape *circleB, const b2Transform &xfB)
 * vendor/Box2D/Box2D/Collision/b2Collision.h:220
 */
static int b2_b2CollideCircles(lua_State *L) {
  try {
    b2Manifold *manifold = *((b2Manifold **)dub_checksdata(L, 1, "b2.Manifold"));
    b2CircleShape *circleA = *((b2CircleShape **)dub_checksdata(L, 2, "b2.CircleShape"));
    b2Transform *xfA = *((b2Transform **)dub_checksdata(L, 3, "b2.Transform"));
    b2CircleShape *circleB = *((b2CircleShape **)dub_checksdata(L, 4, "b2.CircleShape"));
    b2Transform *xfB = *((b2Transform **)dub_checksdata(L, 5, "b2.Transform"));
    b2CollideCircles(manifold, circleA, *xfA, circleB, *xfB);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "b2.CollideCircles: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "b2.CollideCircles: Unknown exception");
  }
  return lua_error(L);
}

/** void b2CollidePolygonAndCircle(b2Manifold *manifold, const b2PolygonShape *polygonA, const b2Transform &xfA, const b2CircleShape *circleB, const b2Transform &xfB)
 * vendor/Box2D/Box2D/Collision/b2Collision.h:225
 */
static int b2_b2CollidePolygonAndCircle(lua_State *L) {
  try {
    b2Manifold *manifold = *((b2Manifold **)dub_checksdata(L, 1, "b2.Manifold"));
    b2PolygonShape *polygonA = *((b2PolygonShape **)dub_checksdata(L, 2, "b2.PolygonShape"));
    b2Transform *xfA = *((b2Transform **)dub_checksdata(L, 3, "b2.Transform"));
    b2CircleShape *circleB = *((b2CircleShape **)dub_checksdata(L, 4, "b2.CircleShape"));
    b2Transform *xfB = *((b2Transform **)dub_checksdata(L, 5, "b2.Transform"));
    b2CollidePolygonAndCircle(manifold, polygonA, *xfA, circleB, *xfB);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "b2.CollidePolygonAndCircle: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "b2.CollidePolygonAndCircle: Unknown exception");
  }
  return lua_error(L);
}

/** void b2CollidePolygons(b2Manifold *manifold, const b2PolygonShape *polygonA, const b2Transform &xfA, const b2PolygonShape *polygonB, const b2Transform &xfB)
 * vendor/Box2D/Box2D/Collision/b2Collision.h:230
 */
static int b2_b2CollidePolygons(lua_State *L) {
  try {
    b2Manifold *manifold = *((b2Manifold **)dub_checksdata(L, 1, "b2.Manifold"));
    b2PolygonShape *polygonA = *((b2PolygonShape **)dub_checksdata(L, 2, "b2.PolygonShape"));
    b2Transform *xfA = *((b2Transform **)dub_checksdata(L, 3, "b2.Transform"));
    b2PolygonShape *polygonB = *((b2PolygonShape **)dub_checksdata(L, 4, "b2.PolygonShape"));
    b2Transform *xfB = *((b2Transform **)dub_checksdata(L, 5, "b2.Transform"));
    b2CollidePolygons(manifold, polygonA, *xfA, polygonB, *xfB);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "b2.CollidePolygons: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "b2.CollidePolygons: Unknown exception");
  }
  return lua_error(L);
}

/** void b2CollideEdgeAndCircle(b2Manifold *manifold, const b2EdgeShape *polygonA, const b2Transform &xfA, const b2CircleShape *circleB, const b2Transform &xfB)
 * vendor/Box2D/Box2D/Collision/b2Collision.h:235
 */
static int b2_b2CollideEdgeAndCircle(lua_State *L) {
  try {
    b2Manifold *manifold = *((b2Manifold **)dub_checksdata(L, 1, "b2.Manifold"));
    b2EdgeShape *polygonA = *((b2EdgeShape **)dub_checksdata(L, 2, "b2.EdgeShape"));
    b2Transform *xfA = *((b2Transform **)dub_checksdata(L, 3, "b2.Transform"));
    b2CircleShape *circleB = *((b2CircleShape **)dub_checksdata(L, 4, "b2.CircleShape"));
    b2Transform *xfB = *((b2Transform **)dub_checksdata(L, 5, "b2.Transform"));
    b2CollideEdgeAndCircle(manifold, polygonA, *xfA, circleB, *xfB);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "b2.CollideEdgeAndCircle: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "b2.CollideEdgeAndCircle: Unknown exception");
  }
  return lua_error(L);
}

/** void b2CollideEdgeAndPolygon(b2Manifold *manifold, const b2EdgeShape *edgeA, const b2Transform &xfA, const b2PolygonShape *circleB, const b2Transform &xfB)
 * vendor/Box2D/Box2D/Collision/b2Collision.h:240
 */
static int b2_b2CollideEdgeAndPolygon(lua_State *L) {
  try {
    b2Manifold *manifold = *((b2Manifold **)dub_checksdata(L, 1, "b2.Manifold"));
    b2EdgeShape *edgeA = *((b2EdgeShape **)dub_checksdata(L, 2, "b2.EdgeShape"));
    b2Transform *xfA = *((b2Transform **)dub_checksdata(L, 3, "b2.Transform"));
    b2PolygonShape *circleB = *((b2PolygonShape **)dub_checksdata(L, 4, "b2.PolygonShape"));
    b2Transform *xfB = *((b2Transform **)dub_checksdata(L, 5, "b2.Transform"));
    b2CollideEdgeAndPolygon(manifold, edgeA, *xfA, circleB, *xfB);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "b2.CollideEdgeAndPolygon: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "b2.CollideEdgeAndPolygon: Unknown exception");
  }
  return lua_error(L);
}

/** bool b2TestOverlap(const b2Shape *shapeA, int32 indexA, const b2Shape *shapeB, int32 indexB, const b2Transform &xfA, const b2Transform &xfB)
 * vendor/Box2D/Box2D/Collision/b2Collision.h:249
 */
static int b2_b2TestOverlap(lua_State *L) {
  try {
    int top__ = lua_gettop(L);
    if (top__ >= 6) {
      b2Shape *shapeA = *((b2Shape **)dub_checksdata(L, 1, "b2.Shape"));
      int32 indexA = dub_checkint(L, 2);
      b2Shape *shapeB = *((b2Shape **)dub_checksdata(L, 3, "b2.Shape"));
      int32 indexB = dub_checkint(L, 4);
      b2Transform *xfA = *((b2Transform **)dub_checksdata(L, 5, "b2.Transform"));
      b2Transform *xfB = *((b2Transform **)dub_checksdata(L, 6, "b2.Transform"));
      lua_pushboolean(L, b2TestOverlap(shapeA, indexA, shapeB, indexB, *xfA, *xfB));
      return 1;
    } else {
      b2AABB *a = *((b2AABB **)dub_checksdata(L, 1, "b2.AABB"));
      b2AABB *b = *((b2AABB **)dub_checksdata(L, 2, "b2.AABB"));
      lua_pushboolean(L, b2TestOverlap(*a, *b));
      return 1;
    }
  } catch (std::exception &e) {
    lua_pushfstring(L, "b2.TestOverlap: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "b2.TestOverlap: Unknown exception");
  }
  return lua_error(L);
}

/** void b2Distance(b2DistanceOutput *output, b2SimplexCache *cache, const b2DistanceInput *input)
 * vendor/Box2D/Box2D/Collision/b2Distance.h:91
 */
static int b2_b2Distance(lua_State *L) {
  try {
    int top__ = lua_gettop(L);
    if (top__ >= 3) {
      b2DistanceOutput *output = *((b2DistanceOutput **)dub_checksdata(L, 1, "b2.DistanceOutput"));
      b2SimplexCache *cache = *((b2SimplexCache **)dub_checksdata(L, 2, "b2.SimplexCache"));
      b2DistanceInput *input = *((b2DistanceInput **)dub_checksdata(L, 3, "b2.DistanceInput"));
      b2Distance(output, cache, input);
      return 0;
    } else {
      b2Vec2 *a = *((b2Vec2 **)dub_checksdata(L, 1, "b2.Vec2"));
      b2Vec2 *b = *((b2Vec2 **)dub_checksdata(L, 2, "b2.Vec2"));
      lua_pushnumber(L, b2Distance(*a, *b));
      return 1;
    }
  } catch (std::exception &e) {
    lua_pushfstring(L, "b2.Distance: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "b2.Distance: Unknown exception");
  }
  return lua_error(L);
}

/** bool b2IsValid(float32 x)
 * vendor/Box2D/Box2D/Common/b2Math.h:32
 */
static int b2_b2IsValid(lua_State *L) {
  try {
    float32 x = dub_checknumber(L, 1);
    lua_pushboolean(L, b2IsValid(x));
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "b2.IsValid: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "b2.IsValid: Unknown exception");
  }
  return lua_error(L);
}

/** float32 b2InvSqrt(float32 x)
 * vendor/Box2D/Box2D/Common/b2Math.h:45
 */
static int b2_b2InvSqrt(lua_State *L) {
  try {
    float32 x = dub_checknumber(L, 1);
    lua_pushnumber(L, b2InvSqrt(x));
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "b2.InvSqrt: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "b2.InvSqrt: Unknown exception");
  }
  return lua_error(L);
}

/** float32 b2Dot(const b2Vec2 &a, const b2Vec2 &b)
 * vendor/Box2D/Box2D/Common/b2Math.h:418
 */
static int b2_b2Dot(lua_State *L) {
  try {
    int type__ = lua_type(L, 1);
    void **ptr1__;
    if ( (ptr1__ = dub_issdata(L, 1, "b2.Vec3", type__)) ) {
      b2Vec3 *a = *((b2Vec3 **)ptr1__);
      b2Vec3 *b = *((b2Vec3 **)dub_checksdata(L, 2, "b2.Vec3"));
      lua_pushnumber(L, b2Dot(*a, *b));
      return 1;
    } else {
      b2Vec2 *a = *((b2Vec2 **)dub_checksdata(L, 1, "b2.Vec2"));
      b2Vec2 *b = *((b2Vec2 **)dub_checksdata(L, 2, "b2.Vec2"));
      lua_pushnumber(L, b2Dot(*a, *b));
      return 1;
    }
  } catch (std::exception &e) {
    lua_pushfstring(L, "b2.Dot: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "b2.Dot: Unknown exception");
  }
  return lua_error(L);
}

/** float32 b2Cross(const b2Vec2 &a, const b2Vec2 &b)
 * vendor/Box2D/Box2D/Common/b2Math.h:424
 */
static int b2_b2Cross(lua_State *L) {
  try {
    int type__ = lua_type(L, 1);
    void **ptr1__;
    if (type__ == LUA_TNUMBER) {
      float32 s = dub_checknumber(L, 1);
      b2Vec2 *a = *((b2Vec2 **)dub_checksdata(L, 2, "b2.Vec2"));
      dub_pushudata(L, new b2Vec2(b2Cross(s, *a)), "b2.Vec2", true);
      return 1;
    } else if ( (ptr1__ = dub_issdata(L, 1, "b2.Vec2", type__)) ) {
      int type__ = lua_type(L, 2);
      if (type__ == LUA_TNUMBER) {
        b2Vec2 *a = *((b2Vec2 **)dub_checksdata(L, 1, "b2.Vec2"));
        float32 s = dub_checknumber(L, 2);
        dub_pushudata(L, new b2Vec2(b2Cross(*a, s)), "b2.Vec2", true);
        return 1;
      } else {
        b2Vec2 *a = *((b2Vec2 **)dub_checksdata(L, 1, "b2.Vec2"));
        b2Vec2 *b = *((b2Vec2 **)dub_checksdata(L, 2, "b2.Vec2"));
        lua_pushnumber(L, b2Cross(*a, *b));
        return 1;
      }
    } else {
      b2Vec3 *a = *((b2Vec3 **)dub_checksdata(L, 1, "b2.Vec3"));
      b2Vec3 *b = *((b2Vec3 **)dub_checksdata(L, 2, "b2.Vec3"));
      dub_pushudata(L, new b2Vec3(b2Cross(*a, *b)), "b2.Vec3", true);
      return 1;
    }
  } catch (std::exception &e) {
    lua_pushfstring(L, "b2.Cross: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "b2.Cross: Unknown exception");
  }
  return lua_error(L);
}

/** b2Vec2 b2Mul(const b2Mat22 &A, const b2Vec2 &v)
 * vendor/Box2D/Box2D/Common/b2Math.h:445
 */
static int b2_b2Mul(lua_State *L) {
  try {
    int type__ = lua_type(L, 2);
    void **ptr2__;
    if ( (ptr2__ = dub_issdata(L, 2, "b2.Transform", type__)) ) {
      b2Transform *A = *((b2Transform **)dub_checksdata(L, 1, "b2.Transform"));
      b2Transform *B = *((b2Transform **)ptr2__);
      dub_pushudata(L, new b2Transform(b2Mul(*A, *B)), "b2.Transform", true);
      return 1;
    } else if ( (ptr2__ = dub_issdata(L, 2, "b2.Mat22", type__)) ) {
      b2Mat22 *A = *((b2Mat22 **)dub_checksdata(L, 1, "b2.Mat22"));
      b2Mat22 *B = *((b2Mat22 **)ptr2__);
      dub_pushudata(L, new b2Mat22(b2Mul(*A, *B)), "b2.Mat22", true);
      return 1;
    } else if ( (ptr2__ = dub_issdata(L, 2, "b2.Vec3", type__)) ) {
      b2Mat33 *A = *((b2Mat33 **)dub_checksdata(L, 1, "b2.Mat33"));
      b2Vec3 *v = *((b2Vec3 **)ptr2__);
      dub_pushudata(L, new b2Vec3(b2Mul(*A, *v)), "b2.Vec3", true);
      return 1;
    } else if ( (ptr2__ = dub_issdata(L, 2, "b2.Rot", type__)) ) {
      b2Rot *q = *((b2Rot **)dub_checksdata(L, 1, "b2.Rot"));
      b2Rot *r = *((b2Rot **)ptr2__);
      dub_pushudata(L, new b2Rot(b2Mul(*q, *r)), "b2.Rot", true);
      return 1;
    } else {
      int type__ = lua_type(L, 1);
      void **ptr1__;
      if ( (ptr1__ = dub_issdata(L, 1, "b2.Transform", type__)) ) {
        b2Transform *T = *((b2Transform **)ptr1__);
        b2Vec2 *v = *((b2Vec2 **)dub_checksdata(L, 2, "b2.Vec2"));
        dub_pushudata(L, new b2Vec2(b2Mul(*T, *v)), "b2.Vec2", true);
        return 1;
      } else if ( (ptr1__ = dub_issdata(L, 1, "b2.Mat22", type__)) ) {
        b2Mat22 *A = *((b2Mat22 **)ptr1__);
        b2Vec2 *v = *((b2Vec2 **)dub_checksdata(L, 2, "b2.Vec2"));
        dub_pushudata(L, new b2Vec2(b2Mul(*A, *v)), "b2.Vec2", true);
        return 1;
      } else {
        b2Rot *q = *((b2Rot **)dub_checksdata(L, 1, "b2.Rot"));
        b2Vec2 *v = *((b2Vec2 **)dub_checksdata(L, 2, "b2.Vec2"));
        dub_pushudata(L, new b2Vec2(b2Mul(*q, *v)), "b2.Vec2", true);
        return 1;
      }
    }
  } catch (std::exception &e) {
    lua_pushfstring(L, "b2.Mul: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "b2.Mul: Unknown exception");
  }
  return lua_error(L);
}

/** b2Vec2 b2MulT(const b2Mat22 &A, const b2Vec2 &v)
 * vendor/Box2D/Box2D/Common/b2Math.h:452
 */
static int b2_b2MulT(lua_State *L) {
  try {
    int type__ = lua_type(L, 2);
    void **ptr2__;
    if ( (ptr2__ = dub_issdata(L, 2, "b2.Transform", type__)) ) {
      b2Transform *A = *((b2Transform **)dub_checksdata(L, 1, "b2.Transform"));
      b2Transform *B = *((b2Transform **)ptr2__);
      dub_pushudata(L, new b2Transform(b2MulT(*A, *B)), "b2.Transform", true);
      return 1;
    } else if ( (ptr2__ = dub_issdata(L, 2, "b2.Vec2", type__)) ) {
      int type__ = lua_type(L, 1);
      void **ptr1__;
      if ( (ptr1__ = dub_issdata(L, 1, "b2.Transform", type__)) ) {
        b2Transform *T = *((b2Transform **)ptr1__);
        b2Vec2 *v = *((b2Vec2 **)dub_checksdata(L, 2, "b2.Vec2"));
        dub_pushudata(L, new b2Vec2(b2MulT(*T, *v)), "b2.Vec2", true);
        return 1;
      } else if ( (ptr1__ = dub_issdata(L, 1, "b2.Mat22", type__)) ) {
        b2Mat22 *A = *((b2Mat22 **)ptr1__);
        b2Vec2 *v = *((b2Vec2 **)dub_checksdata(L, 2, "b2.Vec2"));
        dub_pushudata(L, new b2Vec2(b2MulT(*A, *v)), "b2.Vec2", true);
        return 1;
      } else {
        b2Rot *q = *((b2Rot **)dub_checksdata(L, 1, "b2.Rot"));
        b2Vec2 *v = *((b2Vec2 **)dub_checksdata(L, 2, "b2.Vec2"));
        dub_pushudata(L, new b2Vec2(b2MulT(*q, *v)), "b2.Vec2", true);
        return 1;
      }
    } else if ( (ptr2__ = dub_issdata(L, 2, "b2.Rot", type__)) ) {
      b2Rot *q = *((b2Rot **)dub_checksdata(L, 1, "b2.Rot"));
      b2Rot *r = *((b2Rot **)ptr2__);
      dub_pushudata(L, new b2Rot(b2MulT(*q, *r)), "b2.Rot", true);
      return 1;
    } else {
      b2Mat22 *A = *((b2Mat22 **)dub_checksdata(L, 1, "b2.Mat22"));
      b2Mat22 *B = *((b2Mat22 **)dub_checksdata(L, 2, "b2.Mat22"));
      dub_pushudata(L, new b2Mat22(b2MulT(*A, *B)), "b2.Mat22", true);
      return 1;
    }
  } catch (std::exception &e) {
    lua_pushfstring(L, "b2.MulT: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "b2.MulT: Unknown exception");
  }
  return lua_error(L);
}

/** b2Vec2 operator+(const b2Vec2 &a, const b2Vec2 &b)
 * vendor/Box2D/Box2D/Common/b2Math.h:458
 */
static int b2_operator_add(lua_State *L) {
  try {
    int type__ = lua_type(L, 1);
    void **ptr1__;
    if ( (ptr1__ = dub_issdata(L, 1, "b2.Vec2", type__)) ) {
      b2Vec2 *a = *((b2Vec2 **)ptr1__);
      b2Vec2 *b = *((b2Vec2 **)dub_checksdata(L, 2, "b2.Vec2"));
      dub_pushudata(L, new b2Vec2(operator+(*a, *b)), "b2.Vec2", true);
      return 1;
    } else if ( (ptr1__ = dub_issdata(L, 1, "b2.Mat22", type__)) ) {
      b2Mat22 *A = *((b2Mat22 **)ptr1__);
      b2Mat22 *B = *((b2Mat22 **)dub_checksdata(L, 2, "b2.Mat22"));
      dub_pushudata(L, new b2Mat22(operator+(*A, *B)), "b2.Mat22", true);
      return 1;
    } else {
      b2Vec3 *a = *((b2Vec3 **)dub_checksdata(L, 1, "b2.Vec3"));
      b2Vec3 *b = *((b2Vec3 **)dub_checksdata(L, 2, "b2.Vec3"));
      dub_pushudata(L, new b2Vec3(operator+(*a, *b)), "b2.Vec3", true);
      return 1;
    }
  } catch (std::exception &e) {
    lua_pushfstring(L, "b2.operator+: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "b2.operator+: Unknown exception");
  }
  return lua_error(L);
}

/** b2Vec2 operator-(const b2Vec2 &a, const b2Vec2 &b)
 * vendor/Box2D/Box2D/Common/b2Math.h:464
 */
static int b2_operator_sub(lua_State *L) {
  try {
    int type__ = lua_type(L, 1);
    void **ptr1__;
    if ( (ptr1__ = dub_issdata(L, 1, "b2.Vec3", type__)) ) {
      b2Vec3 *a = *((b2Vec3 **)ptr1__);
      b2Vec3 *b = *((b2Vec3 **)dub_checksdata(L, 2, "b2.Vec3"));
      dub_pushudata(L, new b2Vec3(operator-(*a, *b)), "b2.Vec3", true);
      return 1;
    } else {
      b2Vec2 *a = *((b2Vec2 **)dub_checksdata(L, 1, "b2.Vec2"));
      b2Vec2 *b = *((b2Vec2 **)dub_checksdata(L, 2, "b2.Vec2"));
      dub_pushudata(L, new b2Vec2(operator-(*a, *b)), "b2.Vec2", true);
      return 1;
    }
  } catch (std::exception &e) {
    lua_pushfstring(L, "b2.operator-: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "b2.operator-: Unknown exception");
  }
  return lua_error(L);
}

/** b2Vec2 operator*(float32 s, const b2Vec2 &a)
 * vendor/Box2D/Box2D/Common/b2Math.h:469
 */
static int b2_operator_mul(lua_State *L) {
  try {
    int type__ = lua_type(L, 2);
    void **ptr2__;
    if ( (ptr2__ = dub_issdata(L, 2, "b2.Vec3", type__)) ) {
      float32 s = dub_checknumber(L, 1);
      b2Vec3 *a = *((b2Vec3 **)ptr2__);
      dub_pushudata(L, new b2Vec3(operator*(s, *a)), "b2.Vec3", true);
      return 1;
    } else {
      float32 s = dub_checknumber(L, 1);
      b2Vec2 *a = *((b2Vec2 **)dub_checksdata(L, 2, "b2.Vec2"));
      dub_pushudata(L, new b2Vec2(operator*(s, *a)), "b2.Vec2", true);
      return 1;
    }
  } catch (std::exception &e) {
    lua_pushfstring(L, "b2.operator*: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "b2.operator*: Unknown exception");
  }
  return lua_error(L);
}

/** bool operator==(const b2Vec2 &a, const b2Vec2 &b)
 * vendor/Box2D/Box2D/Common/b2Math.h:474
 */
static int b2_operator_eq(lua_State *L) {
  try {
    b2Vec2 *a = *((b2Vec2 **)dub_checksdata(L, 1, "b2.Vec2"));
    b2Vec2 *b = *((b2Vec2 **)dub_checksdata(L, 2, "b2.Vec2"));
    lua_pushboolean(L, operator==(*a, *b));
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "b2.operator==: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "b2.operator==: Unknown exception");
  }
  return lua_error(L);
}

/** float32 b2DistanceSquared(const b2Vec2 &a, const b2Vec2 &b)
 * vendor/Box2D/Box2D/Common/b2Math.h:485
 */
static int b2_b2DistanceSquared(lua_State *L) {
  try {
    b2Vec2 *a = *((b2Vec2 **)dub_checksdata(L, 1, "b2.Vec2"));
    b2Vec2 *b = *((b2Vec2 **)dub_checksdata(L, 2, "b2.Vec2"));
    lua_pushnumber(L, b2DistanceSquared(*a, *b));
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "b2.DistanceSquared: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "b2.DistanceSquared: Unknown exception");
  }
  return lua_error(L);
}

/** b2Vec2 b2Mul22(const b2Mat33 &A, const b2Vec2 &v)
 * vendor/Box2D/Box2D/Common/b2Math.h:546
 */
static int b2_b2Mul22(lua_State *L) {
  try {
    b2Mat33 *A = *((b2Mat33 **)dub_checksdata(L, 1, "b2.Mat33"));
    b2Vec2 *v = *((b2Vec2 **)dub_checksdata(L, 2, "b2.Vec2"));
    dub_pushudata(L, new b2Vec2(b2Mul22(*A, *v)), "b2.Vec2", true);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "b2.Mul22: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "b2.Mul22: Unknown exception");
  }
  return lua_error(L);
}

/** b2Vec2 b2Abs(const b2Vec2 &a)
 * vendor/Box2D/Box2D/Common/b2Math.h:633
 */
static int b2_b2Abs(lua_State *L) {
  try {
    int type__ = lua_type(L, 1);
    void **ptr1__;
    if ( (ptr1__ = dub_issdata(L, 1, "b2.Mat22", type__)) ) {
      b2Mat22 *A = *((b2Mat22 **)ptr1__);
      dub_pushudata(L, new b2Mat22(b2Abs(*A)), "b2.Mat22", true);
      return 1;
    } else {
      b2Vec2 *a = *((b2Vec2 **)dub_checksdata(L, 1, "b2.Vec2"));
      dub_pushudata(L, new b2Vec2(b2Abs(*a)), "b2.Vec2", true);
      return 1;
    }
  } catch (std::exception &e) {
    lua_pushfstring(L, "b2.Abs: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "b2.Abs: Unknown exception");
  }
  return lua_error(L);
}

/** b2Vec2 b2Min(const b2Vec2 &a, const b2Vec2 &b)
 * vendor/Box2D/Box2D/Common/b2Math.h:649
 */
static int b2_b2Min(lua_State *L) {
  try {
    b2Vec2 *a = *((b2Vec2 **)dub_checksdata(L, 1, "b2.Vec2"));
    b2Vec2 *b = *((b2Vec2 **)dub_checksdata(L, 2, "b2.Vec2"));
    dub_pushudata(L, new b2Vec2(b2Min(*a, *b)), "b2.Vec2", true);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "b2.Min: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "b2.Min: Unknown exception");
  }
  return lua_error(L);
}

/** b2Vec2 b2Max(const b2Vec2 &a, const b2Vec2 &b)
 * vendor/Box2D/Box2D/Common/b2Math.h:660
 */
static int b2_b2Max(lua_State *L) {
  try {
    b2Vec2 *a = *((b2Vec2 **)dub_checksdata(L, 1, "b2.Vec2"));
    b2Vec2 *b = *((b2Vec2 **)dub_checksdata(L, 2, "b2.Vec2"));
    dub_pushudata(L, new b2Vec2(b2Max(*a, *b)), "b2.Vec2", true);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "b2.Max: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "b2.Max: Unknown exception");
  }
  return lua_error(L);
}

/** b2Vec2 b2Clamp(const b2Vec2 &a, const b2Vec2 &low, const b2Vec2 &high)
 * vendor/Box2D/Box2D/Common/b2Math.h:671
 */
static int b2_b2Clamp(lua_State *L) {
  try {
    b2Vec2 *a = *((b2Vec2 **)dub_checksdata(L, 1, "b2.Vec2"));
    b2Vec2 *low = *((b2Vec2 **)dub_checksdata(L, 2, "b2.Vec2"));
    b2Vec2 *high = *((b2Vec2 **)dub_checksdata(L, 3, "b2.Vec2"));
    dub_pushudata(L, new b2Vec2(b2Clamp(*a, *low, *high)), "b2.Vec2", true);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "b2.Clamp: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "b2.Clamp: Unknown exception");
  }
  return lua_error(L);
}

/** uint32 b2NextPowerOfTwo(uint32 x)
 * vendor/Box2D/Box2D/Common/b2Math.h:688
 */
static int b2_b2NextPowerOfTwo(lua_State *L) {
  try {
    uint32 x = dub_checkint(L, 1);
    lua_pushnumber(L, b2NextPowerOfTwo(x));
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "b2.NextPowerOfTwo: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "b2.NextPowerOfTwo: Unknown exception");
  }
  return lua_error(L);
}

/** bool b2IsPowerOfTwo(uint32 x)
 * vendor/Box2D/Box2D/Common/b2Math.h:698
 */
static int b2_b2IsPowerOfTwo(lua_State *L) {
  try {
    uint32 x = dub_checkint(L, 1);
    lua_pushboolean(L, b2IsPowerOfTwo(x));
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "b2.IsPowerOfTwo: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "b2.IsPowerOfTwo: Unknown exception");
  }
  return lua_error(L);
}

/** void* b2Alloc(int32 size)
 * vendor/Box2D/Box2D/Common/b2Settings.h:130
 */
static int b2_b2Alloc(lua_State *L) {
  try {
    int32 size = dub_checkint(L, 1);
    b2Alloc(size);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "b2.Alloc: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "b2.Alloc: Unknown exception");
  }
  return lua_error(L);
}

/** void b2Free(void *mem)
 * vendor/Box2D/Box2D/Common/b2Settings.h:133
 */
static int b2_b2Free(lua_State *L) {
  try {
    void *mem = *((void **)dub_checksdata(L, 1, "void"));
    b2Free(mem);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "b2.Free: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "b2.Free: Unknown exception");
  }
  return lua_error(L);
}

/** void b2TimeOfImpact(b2TOIOutput *output, const b2TOIInput *input)
 * vendor/Box2D/Box2D/Collision/b2TimeOfImpact.h:56
 */
static int b2_b2TimeOfImpact(lua_State *L) {
  try {
    b2TOIOutput *output = *((b2TOIOutput **)dub_checksdata(L, 1, "b2.TOIOutput"));
    b2TOIInput *input = *((b2TOIInput **)dub_checksdata(L, 2, "b2.TOIInput"));
    b2TimeOfImpact(output, input);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "b2.TimeOfImpact: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "b2.TimeOfImpact: Unknown exception");
  }
  return lua_error(L);
}

// --=============================================== FUNCTIONS
static const struct luaL_Reg b2_functions[] = {
  { "b2PairLessThan", b2_b2PairLessThan    },
  { "b2CollideCircles", b2_b2CollideCircles  },
  { "b2CollidePolygonAndCircle", b2_b2CollidePolygonAndCircle },
  { "b2CollidePolygons", b2_b2CollidePolygons },
  { "b2CollideEdgeAndCircle", b2_b2CollideEdgeAndCircle },
  { "b2CollideEdgeAndPolygon", b2_b2CollideEdgeAndPolygon },
  { "b2TestOverlap", b2_b2TestOverlap     },
  { "b2Distance"   , b2_b2Distance        },
  { "b2IsValid"    , b2_b2IsValid         },
  { "b2InvSqrt"    , b2_b2InvSqrt         },
  { "b2Dot"        , b2_b2Dot             },
  { "b2Cross"      , b2_b2Cross           },
  { "b2Mul"        , b2_b2Mul             },
  { "b2MulT"       , b2_b2MulT            },
  { "__add"        , b2_operator_add      },
  { "__sub"        , b2_operator_sub      },
  { "__mul"        , b2_operator_mul      },
  { "__eq"         , b2_operator_eq       },
  { "b2DistanceSquared", b2_b2DistanceSquared },
  { "b2Mul22"      , b2_b2Mul22           },
  { "b2Abs"        , b2_b2Abs             },
  { "b2Min"        , b2_b2Min             },
  { "b2Max"        , b2_b2Max             },
  { "b2Clamp"      , b2_b2Clamp           },
  { "b2NextPowerOfTwo", b2_b2NextPowerOfTwo  },
  { "b2IsPowerOfTwo", b2_b2IsPowerOfTwo    },
  { "b2Alloc"      , b2_b2Alloc           },
  { "b2Free"       , b2_b2Free            },
  { "b2TimeOfImpact", b2_b2TimeOfImpact    },
  { NULL, NULL},
};

// --=============================================== CONSTANTS
static const struct dub_const_Reg b2_const[] = {
  { "staticBody"   , b2_staticBody        },
  { "kinematicBody", b2_kinematicBody     },
  { "dynamicBody"  , b2_dynamicBody       },
  { "nullState"    , b2_nullState         },
  { "addState"     , b2_addState          },
  { "persistState" , b2_persistState      },
  { "removeState"  , b2_removeState       },
  { NULL, 0},
};

extern "C" int luaopen_b2_vendor(lua_State *L) {
  luaopen_b2_BlockAllocator(L);
  luaopen_b2_BodyDef(L);
  luaopen_b2_Body(L);
  luaopen_b2_Pair(L);
  luaopen_b2_BroadPhase(L);
  luaopen_b2_ChainShape(L);
  luaopen_b2_CircleShape(L);
  luaopen_b2_ContactFeature(L);
  luaopen_b2_ContactID(L);
  luaopen_b2_ManifoldPoint(L);
  luaopen_b2_Manifold(L);
  luaopen_b2_WorldManifold(L);
  luaopen_b2_ClipVertex(L);
  luaopen_b2_RayCastInput(L);
  luaopen_b2_RayCastOutput(L);
  luaopen_b2_AABB(L);
  luaopen_b2_ContactManager(L);
  luaopen_b2_DistanceProxy(L);
  luaopen_b2_SimplexCache(L);
  luaopen_b2_DistanceInput(L);
  luaopen_b2_DistanceOutput(L);
  luaopen_b2_Color(L);
  luaopen_b2_Draw(L);
  luaopen_b2_DynamicTree(L);
  luaopen_b2_EdgeShape(L);
  luaopen_b2_Filter(L);
  luaopen_b2_FixtureDef(L);
  luaopen_b2_FixtureProxy(L);
  luaopen_b2_Fixture(L);
  luaopen_b2_Island(L);
  luaopen_b2_Vec2(L);
  luaopen_b2_Vec3(L);
  luaopen_b2_Mat22(L);
  luaopen_b2_Mat33(L);
  luaopen_b2_Rot(L);
  luaopen_b2_Transform(L);
  luaopen_b2_Sweep(L);
  luaopen_b2_PolygonShape(L);
  luaopen_b2_Version(L);
  luaopen_b2_MassData(L);
  luaopen_b2_Shape(L);
  luaopen_b2_StackEntry(L);
  luaopen_b2_StackAllocator(L);
  luaopen_b2_TOIInput(L);
  luaopen_b2_TOIOutput(L);
  luaopen_b2_Profile(L);
  luaopen_b2_TimeStep(L);
  luaopen_b2_Position(L);
  luaopen_b2_Velocity(L);
  luaopen_b2_SolverData(L);
  luaopen_b2_Timer(L);
  luaopen_b2_World(L);
  luaopen_b2_DestructionListener(L);
  luaopen_b2_ContactFilter(L);
  luaopen_b2_ContactImpulse(L);
  luaopen_b2_ContactListener(L);
  luaopen_b2_QueryCallback(L);
  luaopen_b2_RayCastCallback(L);

  // Create the table which will contain all the constants
  lua_getfield(L, LUA_GLOBALSINDEX, "b2");
  if (lua_isnil(L, -1)) {
    // no global table called b2
    lua_pop(L, 1);
    lua_newtable(L);
    // <lib>
    lua_pushvalue(L, -1);
    // <lib> <lib>
    // _G.b2 = <lib>
    lua_setglobal(L, "b2");
    // <lib>
  }
  // <lib>
  // register global constants
  dub_register_const(L, b2_const);
  luaL_register(L, NULL, b2_functions);
  // <lib>
  lua_pop(L, 1);
  return 0;
}
