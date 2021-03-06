/**
 *
 * MACHINE GENERATED FILE. DO NOT EDIT.
 *
 * Bindings for class b2CircleShape
 *
 * This file has been generated by dub 2.1.~.
 */
#include "dub/dub.h"
#include "Box2D/Collision/Shapes/b2CircleShape.h"


/** ~b2CircleShape()
 * 
 */
static int b2CircleShape__b2CircleShape(lua_State *L) {
  try {
    DubUserdata *userdata = ((DubUserdata*)dub_checksdata_d(L, 1, "b2.CircleShape"));
    if (userdata->gc) {
      b2CircleShape *self = (b2CircleShape *)userdata->ptr;
      delete self;
    }
    userdata->gc = false;
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "~b2CircleShape: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "~b2CircleShape: Unknown exception");
  }
  return dub_error(L);
}

/** Set attributes (key, value)
 * 
 */
static int b2CircleShape__set_(lua_State *L) {

  b2CircleShape *self = *((b2CircleShape **)dub_checksdata_n(L, 1, "b2.CircleShape"));
  const char *key = luaL_checkstring(L, 2);
  int key_h = dub_hash(key, 7);
  switch(key_h) {
    case 1: {
      if (DUB_ASSERT_KEY(key, "m_p")) break;
      self->m_p = **((b2Vec2 **)dub_checksdata_n(L, 3, "b2.Vec2"));
      return 0;
    }
    case 2: {
      if (DUB_ASSERT_KEY(key, "m_type")) break;
      self->m_type = (b2Shape::Type)luaL_checkint(L, 3);
      return 0;
    }
    case 4: {
      if (DUB_ASSERT_KEY(key, "m_radius")) break;
      self->m_radius = luaL_checknumber(L, 3);
      return 0;
    }
  }
  if (lua_istable(L, 1)) {
    lua_rawset(L, 1);
  } else {
    luaL_error(L, KEY_EXCEPTION_MSG, key);
  }
  return 0;
}

/** Get attributes (key)
 * 
 */
static int b2CircleShape__get_(lua_State *L) {

  b2CircleShape *self = *((b2CircleShape **)dub_checksdata_n(L, 1, "b2.CircleShape", true));
  const char *key = luaL_checkstring(L, 2);
  // <self> "key" <mt>
  // rawget(mt, key)
  lua_pushvalue(L, 2);
  // <self> "key" <mt> "key"
  lua_rawget(L, -2);
  if (!lua_isnil(L, -1)) {
    // Found method.
    return 1;
  } else {
    // Not in mt = attribute access.
    lua_pop(L, 2);
  }
  int key_h = dub_hash(key, 7);
  switch(key_h) {
    case 1: {
      if (DUB_ASSERT_KEY(key, "m_p")) break;
      dub_pushudata(L, &self->m_p, "b2.Vec2", false);
      return 1;
    }
    case 2: {
      if (DUB_ASSERT_KEY(key, "m_type")) break;
      lua_pushnumber(L, self->m_type);
      return 1;
    }
    case 4: {
      if (DUB_ASSERT_KEY(key, "m_radius")) break;
      lua_pushnumber(L, self->m_radius);
      return 1;
    }
  }
  return 0;
}

/** Cast (class_name)
 * 
 */
static int b2CircleShape__cast_(lua_State *L) {

  b2CircleShape *self = *((b2CircleShape **)dub_checksdata_n(L, 1, "b2.CircleShape"));
  const char *key = luaL_checkstring(L, 2);
  void **retval__ = (void**)lua_newuserdata(L, sizeof(void*));
  int key_h = dub_hash(key, 2);
  switch(key_h) {
    case 1: {
      if (DUB_ASSERT_KEY(key, "b2.Shape")) break;
      *retval__ = static_cast<b2Shape *>(self);
      return 1;
    }
  }
  return 0;
}

/** b2CircleShape::b2CircleShape()
 * vendor/Box2D/Box2D/Collision/Shapes/b2CircleShape.h:28
 */
static int b2CircleShape_b2CircleShape(lua_State *L) {
  try {
    b2CircleShape *retval__ = new b2CircleShape();
    dub_pushudata(L, retval__, "b2.CircleShape", true);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "b2CircleShape: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "b2CircleShape: Unknown exception");
  }
  return dub_error(L);
}

/** b2Shape * b2CircleShape::Clone(b2BlockAllocator *allocator) const
 * vendor/Box2D/Box2D/Collision/Shapes/b2CircleShape.h:31
 */
static int b2CircleShape_Clone(lua_State *L) {
  try {
    b2CircleShape *self = *((b2CircleShape **)dub_checksdata(L, 1, "b2.CircleShape"));
    b2BlockAllocator *allocator = *((b2BlockAllocator **)dub_checksdata(L, 2, "b2.BlockAllocator"));
    b2Shape *retval__ = self->Clone(allocator);
    if (!retval__) return 0;
    dub_pushudata(L, retval__, "b2.Shape", false);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "Clone: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "Clone: Unknown exception");
  }
  return dub_error(L);
}

/** int32 b2CircleShape::GetChildCount() const
 * vendor/Box2D/Box2D/Collision/Shapes/b2CircleShape.h:34
 */
static int b2CircleShape_GetChildCount(lua_State *L) {
  try {
    b2CircleShape *self = *((b2CircleShape **)dub_checksdata(L, 1, "b2.CircleShape"));
    lua_pushnumber(L, self->GetChildCount());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "GetChildCount: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "GetChildCount: Unknown exception");
  }
  return dub_error(L);
}

/** bool b2CircleShape::TestPoint(const b2Transform &transform, const b2Vec2 &p) const
 * vendor/Box2D/Box2D/Collision/Shapes/b2CircleShape.h:37
 */
static int b2CircleShape_TestPoint(lua_State *L) {
  try {
    b2CircleShape *self = *((b2CircleShape **)dub_checksdata(L, 1, "b2.CircleShape"));
    b2Transform *transform = *((b2Transform **)dub_checksdata(L, 2, "b2.Transform"));
    b2Vec2 *p = *((b2Vec2 **)dub_checksdata(L, 3, "b2.Vec2"));
    lua_pushboolean(L, self->TestPoint(*transform, *p));
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "TestPoint: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "TestPoint: Unknown exception");
  }
  return dub_error(L);
}

/** bool b2CircleShape::RayCast(b2RayCastOutput *output, const b2RayCastInput &input, const b2Transform &transform, int32 childIndex) const
 * vendor/Box2D/Box2D/Collision/Shapes/b2CircleShape.h:41
 */
static int b2CircleShape_RayCast(lua_State *L) {
  try {
    b2CircleShape *self = *((b2CircleShape **)dub_checksdata(L, 1, "b2.CircleShape"));
    b2RayCastOutput *output = *((b2RayCastOutput **)dub_checksdata(L, 2, "b2.RayCastOutput"));
    b2RayCastInput *input = *((b2RayCastInput **)dub_checksdata(L, 3, "b2.RayCastInput"));
    b2Transform *transform = *((b2Transform **)dub_checksdata(L, 4, "b2.Transform"));
    int32 childIndex = dub_checkint(L, 5);
    lua_pushboolean(L, self->RayCast(output, *input, *transform, childIndex));
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "RayCast: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "RayCast: Unknown exception");
  }
  return dub_error(L);
}

/** void b2CircleShape::ComputeAABB(b2AABB *aabb, const b2Transform &transform, int32 childIndex) const
 * vendor/Box2D/Box2D/Collision/Shapes/b2CircleShape.h:44
 */
static int b2CircleShape_ComputeAABB(lua_State *L) {
  try {
    b2CircleShape *self = *((b2CircleShape **)dub_checksdata(L, 1, "b2.CircleShape"));
    b2AABB *aabb = *((b2AABB **)dub_checksdata(L, 2, "b2.AABB"));
    b2Transform *transform = *((b2Transform **)dub_checksdata(L, 3, "b2.Transform"));
    int32 childIndex = dub_checkint(L, 4);
    self->ComputeAABB(aabb, *transform, childIndex);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "ComputeAABB: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "ComputeAABB: Unknown exception");
  }
  return dub_error(L);
}

/** void b2CircleShape::ComputeMass(b2MassData *massData, float32 density) const
 * vendor/Box2D/Box2D/Collision/Shapes/b2CircleShape.h:47
 */
static int b2CircleShape_ComputeMass(lua_State *L) {
  try {
    b2CircleShape *self = *((b2CircleShape **)dub_checksdata(L, 1, "b2.CircleShape"));
    b2MassData *massData = *((b2MassData **)dub_checksdata(L, 2, "b2.MassData"));
    float32 density = dub_checknumber(L, 3);
    self->ComputeMass(massData, density);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "ComputeMass: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "ComputeMass: Unknown exception");
  }
  return dub_error(L);
}

/** int32 b2CircleShape::GetSupport(const b2Vec2 &d) const
 * vendor/Box2D/Box2D/Collision/Shapes/b2CircleShape.h:50
 */
static int b2CircleShape_GetSupport(lua_State *L) {
  try {
    b2CircleShape *self = *((b2CircleShape **)dub_checksdata(L, 1, "b2.CircleShape"));
    b2Vec2 *d = *((b2Vec2 **)dub_checksdata(L, 2, "b2.Vec2"));
    lua_pushnumber(L, self->GetSupport(*d));
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "GetSupport: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "GetSupport: Unknown exception");
  }
  return dub_error(L);
}

/** const b2Vec2 & b2CircleShape::GetSupportVertex(const b2Vec2 &d) const
 * vendor/Box2D/Box2D/Collision/Shapes/b2CircleShape.h:53
 */
static int b2CircleShape_GetSupportVertex(lua_State *L) {
  try {
    b2CircleShape *self = *((b2CircleShape **)dub_checksdata(L, 1, "b2.CircleShape"));
    b2Vec2 *d = *((b2Vec2 **)dub_checksdata(L, 2, "b2.Vec2"));
    dub_pushudata(L, const_cast<b2Vec2*>(&self->GetSupportVertex(*d)), "b2.Vec2", false);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "GetSupportVertex: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "GetSupportVertex: Unknown exception");
  }
  return dub_error(L);
}

/** int32 b2CircleShape::GetVertexCount() const
 * vendor/Box2D/Box2D/Collision/Shapes/b2CircleShape.h:56
 */
static int b2CircleShape_GetVertexCount(lua_State *L) {
  try {
    b2CircleShape *self = *((b2CircleShape **)dub_checksdata(L, 1, "b2.CircleShape"));
    lua_pushnumber(L, self->GetVertexCount());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "GetVertexCount: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "GetVertexCount: Unknown exception");
  }
  return dub_error(L);
}

/** const b2Vec2 & b2CircleShape::GetVertex(int32 index) const
 * vendor/Box2D/Box2D/Collision/Shapes/b2CircleShape.h:59
 */
static int b2CircleShape_GetVertex(lua_State *L) {
  try {
    b2CircleShape *self = *((b2CircleShape **)dub_checksdata(L, 1, "b2.CircleShape"));
    int32 index = dub_checkint(L, 2);
    dub_pushudata(L, const_cast<b2Vec2*>(&self->GetVertex(index)), "b2.Vec2", false);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "GetVertex: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "GetVertex: Unknown exception");
  }
  return dub_error(L);
}

/** b2Shape::Type b2Shape::GetType() const
 * vendor/Box2D/Box2D/Collision/Shapes/b2Shape.h:62
 */
static int b2CircleShape_GetType(lua_State *L) {
  try {
    b2CircleShape *self = *((b2CircleShape **)dub_checksdata(L, 1, "b2.CircleShape"));
    lua_pushnumber(L, self->GetType());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "GetType: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "GetType: Unknown exception");
  }
  return dub_error(L);
}



// --=============================================== __tostring
static int b2CircleShape___tostring(lua_State *L) {
  b2CircleShape *self = *((b2CircleShape **)dub_checksdata_n(L, 1, "b2.CircleShape"));
  lua_pushfstring(L, "b2.CircleShape: %p", self);
  
  return 1;
}

// --=============================================== METHODS

static const struct luaL_Reg b2CircleShape_member_methods[] = {
  { "__gc"         , b2CircleShape__b2CircleShape },
  { "__newindex"   , b2CircleShape__set_  },
  { "__index"      , b2CircleShape__get_  },
  { "_cast_"       , b2CircleShape__cast_ },
  { "new"          , b2CircleShape_b2CircleShape },
  { "Clone"        , b2CircleShape_Clone  },
  { "GetChildCount", b2CircleShape_GetChildCount },
  { "TestPoint"    , b2CircleShape_TestPoint },
  { "RayCast"      , b2CircleShape_RayCast },
  { "ComputeAABB"  , b2CircleShape_ComputeAABB },
  { "ComputeMass"  , b2CircleShape_ComputeMass },
  { "GetSupport"   , b2CircleShape_GetSupport },
  { "GetSupportVertex", b2CircleShape_GetSupportVertex },
  { "GetVertexCount", b2CircleShape_GetVertexCount },
  { "GetVertex"    , b2CircleShape_GetVertex },
  { "GetType"      , b2CircleShape_GetType },
  { "__tostring"   , b2CircleShape___tostring },
  { "deleted"      , dub_isDeleted        },
  { NULL, NULL},
};


extern "C" int luaopen_b2_CircleShape(lua_State *L)
{
  // Create the metatable which will contain all the member methods
  luaL_newmetatable(L, "b2.CircleShape");
  // <mt>

  // register member methods
  luaL_register(L, NULL, b2CircleShape_member_methods);
  // save meta-table in b2
  dub_register(L, "b2", "CircleShape", "CircleShape");
  // <mt>
  lua_pop(L, 1);
  return 0;
}
