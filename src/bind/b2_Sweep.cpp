/**
 *
 * MACHINE GENERATED FILE. DO NOT EDIT.
 *
 * Bindings for class b2Sweep
 *
 * This file has been generated by dub 2.1.~.
 */
#include "dub/dub.h"
#include "Box2D/Common/b2Math.h"


/** Set attributes (key, value)
 * 
 */
static int b2Sweep__set_(lua_State *L) {

  b2Sweep *self = *((b2Sweep **)dub_checksdata_n(L, 1, "b2.Sweep"));
  const char *key = luaL_checkstring(L, 2);
  int key_h = dub_hash(key, 8);
  switch(key_h) {
    case 0: {
      if (DUB_ASSERT_KEY(key, "localCenter")) break;
      self->localCenter = **((b2Vec2 **)dub_checksdata_n(L, 3, "b2.Vec2"));
      return 0;
    }
    case 5: {
      if (DUB_ASSERT_KEY(key, "c0")) break;
      self->c0 = **((b2Vec2 **)dub_checksdata_n(L, 3, "b2.Vec2"));
      return 0;
    }
    case 3: {
      if (DUB_ASSERT_KEY(key, "c")) break;
      self->c = **((b2Vec2 **)dub_checksdata_n(L, 3, "b2.Vec2"));
      return 0;
    }
    case 7: {
      if (DUB_ASSERT_KEY(key, "a0")) break;
      self->a0 = luaL_checknumber(L, 3);
      return 0;
    }
    case 1: {
      if (DUB_ASSERT_KEY(key, "a")) break;
      self->a = luaL_checknumber(L, 3);
      return 0;
    }
    case 2: {
      if (DUB_ASSERT_KEY(key, "alpha0")) break;
      self->alpha0 = luaL_checknumber(L, 3);
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
static int b2Sweep__get_(lua_State *L) {

  b2Sweep *self = *((b2Sweep **)dub_checksdata_n(L, 1, "b2.Sweep", true));
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
  int key_h = dub_hash(key, 8);
  switch(key_h) {
    case 0: {
      if (DUB_ASSERT_KEY(key, "localCenter")) break;
      dub_pushudata(L, &self->localCenter, "b2.Vec2", false);
      return 1;
    }
    case 5: {
      if (DUB_ASSERT_KEY(key, "c0")) break;
      dub_pushudata(L, &self->c0, "b2.Vec2", false);
      return 1;
    }
    case 3: {
      if (DUB_ASSERT_KEY(key, "c")) break;
      dub_pushudata(L, &self->c, "b2.Vec2", false);
      return 1;
    }
    case 7: {
      if (DUB_ASSERT_KEY(key, "a0")) break;
      lua_pushnumber(L, self->a0);
      return 1;
    }
    case 1: {
      if (DUB_ASSERT_KEY(key, "a")) break;
      lua_pushnumber(L, self->a);
      return 1;
    }
    case 2: {
      if (DUB_ASSERT_KEY(key, "alpha0")) break;
      lua_pushnumber(L, self->alpha0);
      return 1;
    }
  }
  return 0;
}

/** b2Sweep()
 * 
 */
static int b2Sweep_b2Sweep(lua_State *L) {
  try {
    b2Sweep *retval__ = new b2Sweep();
    dub_pushudata(L, retval__, "b2.Sweep", true);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "b2Sweep: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "b2Sweep: Unknown exception");
  }
  return dub_error(L);
}

/** void b2Sweep::GetTransform(b2Transform *xfb, float32 beta) const
 * vendor/Box2D/Box2D/Common/b2Math.h:395
 */
static int b2Sweep_GetTransform(lua_State *L) {
  try {
    b2Sweep *self = *((b2Sweep **)dub_checksdata(L, 1, "b2.Sweep"));
    b2Transform *xfb = *((b2Transform **)dub_checksdata(L, 2, "b2.Transform"));
    float32 beta = dub_checknumber(L, 3);
    self->GetTransform(xfb, beta);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "GetTransform: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "GetTransform: Unknown exception");
  }
  return dub_error(L);
}

/** void b2Sweep::Advance(float32 alpha)
 * vendor/Box2D/Box2D/Common/b2Math.h:399
 */
static int b2Sweep_Advance(lua_State *L) {
  try {
    b2Sweep *self = *((b2Sweep **)dub_checksdata(L, 1, "b2.Sweep"));
    float32 alpha = dub_checknumber(L, 2);
    self->Advance(alpha);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "Advance: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "Advance: Unknown exception");
  }
  return dub_error(L);
}

/** void b2Sweep::Normalize()
 * vendor/Box2D/Box2D/Common/b2Math.h:402
 */
static int b2Sweep_Normalize(lua_State *L) {
  try {
    b2Sweep *self = *((b2Sweep **)dub_checksdata(L, 1, "b2.Sweep"));
    self->Normalize();
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "Normalize: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "Normalize: Unknown exception");
  }
  return dub_error(L);
}



// --=============================================== __tostring
static int b2Sweep___tostring(lua_State *L) {
  b2Sweep *self = *((b2Sweep **)dub_checksdata_n(L, 1, "b2.Sweep"));
  lua_pushfstring(L, "b2.Sweep: %p", self);
  
  return 1;
}

// --=============================================== METHODS

static const struct luaL_Reg b2Sweep_member_methods[] = {
  { "__newindex"   , b2Sweep__set_        },
  { "__index"      , b2Sweep__get_        },
  { "new"          , b2Sweep_b2Sweep      },
  { "GetTransform" , b2Sweep_GetTransform },
  { "Advance"      , b2Sweep_Advance      },
  { "Normalize"    , b2Sweep_Normalize    },
  { "__tostring"   , b2Sweep___tostring   },
  { "deleted"      , dub_isDeleted        },
  { NULL, NULL},
};


extern "C" int luaopen_b2_Sweep(lua_State *L)
{
  // Create the metatable which will contain all the member methods
  luaL_newmetatable(L, "b2.Sweep");
  // <mt>

  // register member methods
  luaL_register(L, NULL, b2Sweep_member_methods);
  // save meta-table in b2
  dub_register(L, "b2", "Sweep", "Sweep");
  // <mt>
  lua_pop(L, 1);
  return 0;
}