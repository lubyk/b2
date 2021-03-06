/**
 *
 * MACHINE GENERATED FILE. DO NOT EDIT.
 *
 * Bindings for class b2Draw
 *
 * This file has been generated by dub 2.1.~.
 */
#include "dub/dub.h"
#include "Box2D/Common/b2Draw.h"


/** virtual b2Draw::~b2Draw()
 * vendor/Box2D/Box2D/Common/b2Draw.h:40
 */
static int b2Draw__b2Draw(lua_State *L) {
  try {
    DubUserdata *userdata = ((DubUserdata*)dub_checksdata_d(L, 1, "b2.Draw"));
    if (userdata->gc) {
      b2Draw *self = (b2Draw *)userdata->ptr;
      delete self;
    }
    userdata->gc = false;
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "~b2Draw: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "~b2Draw: Unknown exception");
  }
  return dub_error(L);
}

/** void b2Draw::SetFlags(uint32 flags)
 * vendor/Box2D/Box2D/Common/b2Draw.h:52
 */
static int b2Draw_SetFlags(lua_State *L) {
  try {
    b2Draw *self = *((b2Draw **)dub_checksdata(L, 1, "b2.Draw"));
    uint32 flags = dub_checkint(L, 2);
    self->SetFlags(flags);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "SetFlags: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "SetFlags: Unknown exception");
  }
  return dub_error(L);
}

/** uint32 b2Draw::GetFlags() const
 * vendor/Box2D/Box2D/Common/b2Draw.h:55
 */
static int b2Draw_GetFlags(lua_State *L) {
  try {
    b2Draw *self = *((b2Draw **)dub_checksdata(L, 1, "b2.Draw"));
    lua_pushnumber(L, self->GetFlags());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "GetFlags: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "GetFlags: Unknown exception");
  }
  return dub_error(L);
}

/** void b2Draw::AppendFlags(uint32 flags)
 * vendor/Box2D/Box2D/Common/b2Draw.h:58
 */
static int b2Draw_AppendFlags(lua_State *L) {
  try {
    b2Draw *self = *((b2Draw **)dub_checksdata(L, 1, "b2.Draw"));
    uint32 flags = dub_checkint(L, 2);
    self->AppendFlags(flags);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "AppendFlags: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "AppendFlags: Unknown exception");
  }
  return dub_error(L);
}

/** void b2Draw::ClearFlags(uint32 flags)
 * vendor/Box2D/Box2D/Common/b2Draw.h:61
 */
static int b2Draw_ClearFlags(lua_State *L) {
  try {
    b2Draw *self = *((b2Draw **)dub_checksdata(L, 1, "b2.Draw"));
    uint32 flags = dub_checkint(L, 2);
    self->ClearFlags(flags);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "ClearFlags: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "ClearFlags: Unknown exception");
  }
  return dub_error(L);
}



// --=============================================== __tostring
static int b2Draw___tostring(lua_State *L) {
  b2Draw *self = *((b2Draw **)dub_checksdata_n(L, 1, "b2.Draw"));
  lua_pushfstring(L, "b2.Draw: %p", self);
  
  return 1;
}

// --=============================================== METHODS

static const struct luaL_Reg b2Draw_member_methods[] = {
  { "__gc"         , b2Draw__b2Draw       },
  { "SetFlags"     , b2Draw_SetFlags      },
  { "GetFlags"     , b2Draw_GetFlags      },
  { "AppendFlags"  , b2Draw_AppendFlags   },
  { "ClearFlags"   , b2Draw_ClearFlags    },
  { "__tostring"   , b2Draw___tostring    },
  { "deleted"      , dub_isDeleted        },
  { NULL, NULL},
};

// --=============================================== CONSTANTS
static const struct dub_const_Reg b2Draw_const[] = {
  { "e_shapeBit"   , b2Draw::e_shapeBit   },
  { "e_jointBit"   , b2Draw::e_jointBit   },
  { "e_aabbBit"    , b2Draw::e_aabbBit    },
  { "e_pairBit"    , b2Draw::e_pairBit    },
  { "e_centerOfMassBit", b2Draw::e_centerOfMassBit },
  { NULL, 0},
};

extern "C" int luaopen_b2_Draw(lua_State *L)
{
  // Create the metatable which will contain all the member methods
  luaL_newmetatable(L, "b2.Draw");
  // <mt>
  // register class constants
  dub_register_const(L, b2Draw_const);

  // register member methods
  luaL_register(L, NULL, b2Draw_member_methods);
  // save meta-table in b2
  dub_register(L, "b2", "Draw", "Draw");
  // <mt>
  lua_pop(L, 1);
  return 0;
}
