/**
 *
 * MACHINE GENERATED FILE. DO NOT EDIT.
 *
 * Bindings for class b2Vec3
 *
 * This file has been generated by dub 2.1.~.
 */
#include "dub/dub.h"
#include "Box2D/Common/b2Math.h"


/** ~b2Vec3()
 * 
 */
static int b2Vec3__b2Vec3(lua_State *L) {
  try {
    DubUserdata *userdata = ((DubUserdata*)dub_checksdata_d(L, 1, "b2.Vec3"));
    if (userdata->gc) {
      b2Vec3 *self = (b2Vec3 *)userdata->ptr;
      delete self;
    }
    userdata->gc = false;
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "~b2Vec3: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "~b2Vec3: Unknown exception");
  }
  return dub_error(L);
}

/** Set attributes (key, value)
 * 
 */
static int b2Vec3__set_(lua_State *L) {

  b2Vec3 *self = *((b2Vec3 **)dub_checksdata_n(L, 1, "b2.Vec3"));
  const char *key = luaL_checkstring(L, 2);
  int key_h = dub_hash(key, 3);
  switch(key_h) {
    case 0: {
      if (DUB_ASSERT_KEY(key, "x")) break;
      self->x = luaL_checknumber(L, 3);
      return 0;
    }
    case 1: {
      if (DUB_ASSERT_KEY(key, "y")) break;
      self->y = luaL_checknumber(L, 3);
      return 0;
    }
    case 2: {
      if (DUB_ASSERT_KEY(key, "z")) break;
      self->z = luaL_checknumber(L, 3);
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
static int b2Vec3__get_(lua_State *L) {

  b2Vec3 *self = *((b2Vec3 **)dub_checksdata_n(L, 1, "b2.Vec3", true));
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
    case 0: {
      if (DUB_ASSERT_KEY(key, "x")) break;
      lua_pushnumber(L, self->x);
      return 1;
    }
    case 1: {
      if (DUB_ASSERT_KEY(key, "y")) break;
      lua_pushnumber(L, self->y);
      return 1;
    }
    case 2: {
      if (DUB_ASSERT_KEY(key, "z")) break;
      lua_pushnumber(L, self->z);
      return 1;
    }
  }
  return 0;
}

/** b2Vec3::b2Vec3()
 * vendor/Box2D/Box2D/Common/b2Math.h:158
 */
static int b2Vec3_b2Vec3(lua_State *L) {
  try {
    int top__ = lua_gettop(L);
    if (top__ >= 3) {
      float32 x = dub_checknumber(L, 1);
      float32 y = dub_checknumber(L, 2);
      float32 z = dub_checknumber(L, 3);
      b2Vec3 *retval__ = new b2Vec3(x, y, z);
      dub_pushudata(L, retval__, "b2.Vec3", true);
      return 1;
    } else {
      b2Vec3 *retval__ = new b2Vec3();
      dub_pushudata(L, retval__, "b2.Vec3", true);
      return 1;
    }
  } catch (std::exception &e) {
    lua_pushfstring(L, "b2Vec3: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "b2Vec3: Unknown exception");
  }
  return dub_error(L);
}

/** void b2Vec3::SetZero()
 * vendor/Box2D/Box2D/Common/b2Math.h:164
 */
static int b2Vec3_SetZero(lua_State *L) {
  try {
    b2Vec3 *self = *((b2Vec3 **)dub_checksdata(L, 1, "b2.Vec3"));
    self->SetZero();
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "SetZero: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "SetZero: Unknown exception");
  }
  return dub_error(L);
}

/** void b2Vec3::Set(float32 x_, float32 y_, float32 z_)
 * vendor/Box2D/Box2D/Common/b2Math.h:167
 */
static int b2Vec3_Set(lua_State *L) {
  try {
    b2Vec3 *self = *((b2Vec3 **)dub_checksdata(L, 1, "b2.Vec3"));
    float32 x_ = dub_checknumber(L, 2);
    float32 y_ = dub_checknumber(L, 3);
    float32 z_ = dub_checknumber(L, 4);
    self->Set(x_, y_, z_);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "Set: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "Set: Unknown exception");
  }
  return dub_error(L);
}

/** b2Vec3 b2Vec3::operator-() const
 * vendor/Box2D/Box2D/Common/b2Math.h:170
 */
static int b2Vec3_operator_unm(lua_State *L) {
  try {
    b2Vec3 *self = *((b2Vec3 **)dub_checksdata(L, 1, "b2.Vec3"));
    dub_pushudata(L, new b2Vec3(self->operator- ()), "b2.Vec3", true);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "operator- : %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "operator- : Unknown exception");
  }
  return dub_error(L);
}

/** void b2Vec3::operator+=(const b2Vec3 &v)
 * vendor/Box2D/Box2D/Common/b2Math.h:174
 */
static int b2Vec3_operator_adde(lua_State *L) {
  try {
    b2Vec3 *self = *((b2Vec3 **)dub_checksdata(L, 1, "b2.Vec3"));
    b2Vec3 *v = *((b2Vec3 **)dub_checksdata(L, 2, "b2.Vec3"));
    self->operator+=(*v);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "operator+=: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "operator+=: Unknown exception");
  }
  return dub_error(L);
}

/** void b2Vec3::operator-=(const b2Vec3 &v)
 * vendor/Box2D/Box2D/Common/b2Math.h:180
 */
static int b2Vec3_operator_sube(lua_State *L) {
  try {
    b2Vec3 *self = *((b2Vec3 **)dub_checksdata(L, 1, "b2.Vec3"));
    b2Vec3 *v = *((b2Vec3 **)dub_checksdata(L, 2, "b2.Vec3"));
    self->operator-=(*v);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "operator-=: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "operator-=: Unknown exception");
  }
  return dub_error(L);
}

/** void b2Vec3::operator*=(float32 s)
 * vendor/Box2D/Box2D/Common/b2Math.h:186
 */
static int b2Vec3_operator_mule(lua_State *L) {
  try {
    b2Vec3 *self = *((b2Vec3 **)dub_checksdata(L, 1, "b2.Vec3"));
    float32 s = dub_checknumber(L, 2);
    self->operator*=(s);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "operator*=: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "operator*=: Unknown exception");
  }
  return dub_error(L);
}



// --=============================================== __tostring
static int b2Vec3___tostring(lua_State *L) {
  b2Vec3 *self = *((b2Vec3 **)dub_checksdata_n(L, 1, "b2.Vec3"));
  lua_pushfstring(L, "b2.Vec3: %p", self);
  
  return 1;
}

// --=============================================== METHODS

static const struct luaL_Reg b2Vec3_member_methods[] = {
  { "__gc"         , b2Vec3__b2Vec3       },
  { "__newindex"   , b2Vec3__set_         },
  { "__index"      , b2Vec3__get_         },
  { "new"          , b2Vec3_b2Vec3        },
  { "SetZero"      , b2Vec3_SetZero       },
  { "Set"          , b2Vec3_Set           },
  { "__unm"        , b2Vec3_operator_unm  },
  { "add"          , b2Vec3_operator_adde },
  { "sub"          , b2Vec3_operator_sube },
  { "mul"          , b2Vec3_operator_mule },
  { "__tostring"   , b2Vec3___tostring    },
  { "deleted"      , dub_isDeleted        },
  { NULL, NULL},
};


extern "C" int luaopen_b2_Vec3(lua_State *L)
{
  // Create the metatable which will contain all the member methods
  luaL_newmetatable(L, "b2.Vec3");
  // <mt>

  // register member methods
  luaL_register(L, NULL, b2Vec3_member_methods);
  // save meta-table in b2
  dub_register(L, "b2", "Vec3", "Vec3");
  // <mt>
  lua_pop(L, 1);
  return 0;
}