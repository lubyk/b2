/**
 *
 * MACHINE GENERATED FILE. DO NOT EDIT.
 *
 * Bindings for class b2Velocity
 *
 * This file has been generated by dub 2.1.~.
 */
#include "dub/dub.h"
#include "Box2D/Dynamics/b2TimeStep.h"


/** Set attributes (key, value)
 * 
 */
static int b2Velocity__set_(lua_State *L) {

  b2Velocity *self = *((b2Velocity **)dub_checksdata_n(L, 1, "b2.Velocity"));
  const char *key = luaL_checkstring(L, 2);
  int key_h = dub_hash(key, 2);
  switch(key_h) {
    case 0: {
      if (DUB_ASSERT_KEY(key, "v")) break;
      self->v = **((b2Vec2 **)dub_checksdata_n(L, 3, "b2.Vec2"));
      return 0;
    }
    case 1: {
      if (DUB_ASSERT_KEY(key, "w")) break;
      self->w = luaL_checknumber(L, 3);
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
static int b2Velocity__get_(lua_State *L) {

  b2Velocity *self = *((b2Velocity **)dub_checksdata_n(L, 1, "b2.Velocity", true));
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
  int key_h = dub_hash(key, 2);
  switch(key_h) {
    case 0: {
      if (DUB_ASSERT_KEY(key, "v")) break;
      dub_pushudata(L, &self->v, "b2.Vec2", false);
      return 1;
    }
    case 1: {
      if (DUB_ASSERT_KEY(key, "w")) break;
      lua_pushnumber(L, self->w);
      return 1;
    }
  }
  return 0;
}

/** b2Velocity()
 * 
 */
static int b2Velocity_b2Velocity(lua_State *L) {
  try {
    b2Velocity *retval__ = new b2Velocity();
    dub_pushudata(L, retval__, "b2.Velocity", true);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "b2Velocity: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "b2Velocity: Unknown exception");
  }
  return dub_error(L);
}



// --=============================================== __tostring
static int b2Velocity___tostring(lua_State *L) {
  b2Velocity *self = *((b2Velocity **)dub_checksdata_n(L, 1, "b2.Velocity"));
  lua_pushfstring(L, "b2.Velocity: %p", self);
  
  return 1;
}

// --=============================================== METHODS

static const struct luaL_Reg b2Velocity_member_methods[] = {
  { "__newindex"   , b2Velocity__set_     },
  { "__index"      , b2Velocity__get_     },
  { "new"          , b2Velocity_b2Velocity },
  { "__tostring"   , b2Velocity___tostring },
  { "deleted"      , dub_isDeleted        },
  { NULL, NULL},
};


extern "C" int luaopen_b2_Velocity(lua_State *L)
{
  // Create the metatable which will contain all the member methods
  luaL_newmetatable(L, "b2.Velocity");
  // <mt>

  // register member methods
  luaL_register(L, NULL, b2Velocity_member_methods);
  // save meta-table in b2
  dub_register(L, "b2", "Velocity", "Velocity");
  // <mt>
  lua_pop(L, 1);
  return 0;
}
