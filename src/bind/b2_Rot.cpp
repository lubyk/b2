/**
 *
 * MACHINE GENERATED FILE. DO NOT EDIT.
 *
 * Bindings for class b2Rot
 *
 * This file has been generated by dub 2.1.~.
 */
#include "dub/dub.h"
#include "Box2D/Common/b2Math.h"


/** ~b2Rot()
 * 
 */
static int b2Rot__b2Rot(lua_State *L) {
  try {
    DubUserdata *userdata = ((DubUserdata*)dub_checksdata_d(L, 1, "b2.Rot"));
    if (userdata->gc) {
      b2Rot *self = (b2Rot *)userdata->ptr;
      delete self;
    }
    userdata->gc = false;
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "~b2Rot: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "~b2Rot: Unknown exception");
  }
  return dub_error(L);
}

/** Set attributes (key, value)
 * 
 */
static int b2Rot__set_(lua_State *L) {

  b2Rot *self = *((b2Rot **)dub_checksdata_n(L, 1, "b2.Rot"));
  const char *key = luaL_checkstring(L, 2);
  int key_h = dub_hash(key, 3);
  switch(key_h) {
    case 1: {
      if (DUB_ASSERT_KEY(key, "s")) break;
      self->s = luaL_checknumber(L, 3);
      return 0;
    }
    case 0: {
      if (DUB_ASSERT_KEY(key, "c")) break;
      self->c = luaL_checknumber(L, 3);
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
static int b2Rot__get_(lua_State *L) {

  b2Rot *self = *((b2Rot **)dub_checksdata_n(L, 1, "b2.Rot", true));
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
  int key_h = dub_hash(key, 3);
  switch(key_h) {
    case 1: {
      if (DUB_ASSERT_KEY(key, "s")) break;
      lua_pushnumber(L, self->s);
      return 1;
    }
    case 0: {
      if (DUB_ASSERT_KEY(key, "c")) break;
      lua_pushnumber(L, self->c);
      return 1;
    }
  }
  return 0;
}

/** b2Rot::b2Rot()
 * vendor/Box2D/Box2D/Common/b2Math.h:312
 */
static int b2Rot_b2Rot(lua_State *L) {
  try {
    int top__ = lua_gettop(L);
    if (top__ >= 1) {
      float32 angle = dub_checknumber(L, 1);
      b2Rot *retval__ = new b2Rot(angle);
      dub_pushudata(L, retval__, "b2.Rot", true);
      return 1;
    } else {
      b2Rot *retval__ = new b2Rot();
      dub_pushudata(L, retval__, "b2.Rot", true);
      return 1;
    }
  } catch (std::exception &e) {
    lua_pushfstring(L, "b2Rot: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "b2Rot: Unknown exception");
  }
  return dub_error(L);
}

/** void b2Rot::Set(float32 angle)
 * vendor/Box2D/Box2D/Common/b2Math.h:324
 */
static int b2Rot_Set(lua_State *L) {
  try {
    b2Rot *self = *((b2Rot **)dub_checksdata(L, 1, "b2.Rot"));
    float32 angle = dub_checknumber(L, 2);
    self->Set(angle);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "Set: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "Set: Unknown exception");
  }
  return dub_error(L);
}

/** void b2Rot::SetIdentity()
 * vendor/Box2D/Box2D/Common/b2Math.h:332
 */
static int b2Rot_SetIdentity(lua_State *L) {
  try {
    b2Rot *self = *((b2Rot **)dub_checksdata(L, 1, "b2.Rot"));
    self->SetIdentity();
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "SetIdentity: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "SetIdentity: Unknown exception");
  }
  return dub_error(L);
}

/** float32 b2Rot::GetAngle() const
 * vendor/Box2D/Box2D/Common/b2Math.h:339
 */
static int b2Rot_GetAngle(lua_State *L) {
  try {
    b2Rot *self = *((b2Rot **)dub_checksdata(L, 1, "b2.Rot"));
    lua_pushnumber(L, self->GetAngle());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "GetAngle: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "GetAngle: Unknown exception");
  }
  return dub_error(L);
}

/** b2Vec2 b2Rot::GetXAxis() const
 * vendor/Box2D/Box2D/Common/b2Math.h:345
 */
static int b2Rot_GetXAxis(lua_State *L) {
  try {
    b2Rot *self = *((b2Rot **)dub_checksdata(L, 1, "b2.Rot"));
    dub_pushudata(L, new b2Vec2(self->GetXAxis()), "b2.Vec2", true);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "GetXAxis: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "GetXAxis: Unknown exception");
  }
  return dub_error(L);
}

/** b2Vec2 b2Rot::GetYAxis() const
 * vendor/Box2D/Box2D/Common/b2Math.h:351
 */
static int b2Rot_GetYAxis(lua_State *L) {
  try {
    b2Rot *self = *((b2Rot **)dub_checksdata(L, 1, "b2.Rot"));
    dub_pushudata(L, new b2Vec2(self->GetYAxis()), "b2.Vec2", true);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "GetYAxis: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "GetYAxis: Unknown exception");
  }
  return dub_error(L);
}



// --=============================================== __tostring
static int b2Rot___tostring(lua_State *L) {
  b2Rot *self = *((b2Rot **)dub_checksdata_n(L, 1, "b2.Rot"));
  lua_pushfstring(L, "b2.Rot: %p", self);
  
  return 1;
}

// --=============================================== METHODS

static const struct luaL_Reg b2Rot_member_methods[] = {
  { "__gc"         , b2Rot__b2Rot         },
  { "__newindex"   , b2Rot__set_          },
  { "__index"      , b2Rot__get_          },
  { "new"          , b2Rot_b2Rot          },
  { "Set"          , b2Rot_Set            },
  { "SetIdentity"  , b2Rot_SetIdentity    },
  { "GetAngle"     , b2Rot_GetAngle       },
  { "GetXAxis"     , b2Rot_GetXAxis       },
  { "GetYAxis"     , b2Rot_GetYAxis       },
  { "__tostring"   , b2Rot___tostring     },
  { "deleted"      , dub_isDeleted        },
  { NULL, NULL},
};


extern "C" int luaopen_b2_Rot(lua_State *L)
{
  // Create the metatable which will contain all the member methods
  luaL_newmetatable(L, "b2.Rot");
  // <mt>

  // register member methods
  luaL_register(L, NULL, b2Rot_member_methods);
  // save meta-table in b2
  dub_register(L, "b2", "Rot", "Rot");
  // <mt>
  lua_pop(L, 1);
  return 0;
}