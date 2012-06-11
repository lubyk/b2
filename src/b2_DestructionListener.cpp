/**
 *
 * MACHINE GENERATED FILE. DO NOT EDIT.
 *
 * Bindings for class b2DestructionListener
 *
 * This file has been generated by dub 2.1.~.
 */
#include "dub/dub.h"
#include "Box2D/Dynamics/b2WorldCallbacks.h"


/** virtual b2DestructionListener::~b2DestructionListener()
 * vendor/Box2D/Box2D/Dynamics/b2WorldCallbacks.h:39
 */
static int b2DestructionListener__b2DestructionListener(lua_State *L) {
  try {
    DubUserdata *userdata = ((DubUserdata*)dub_checksdata_d(L, 1, "b2.DestructionListener"));
    if (userdata->gc) {
      b2DestructionListener *self = (b2DestructionListener *)userdata->ptr;
      delete self;
    }
    userdata->gc = false;
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "~b2DestructionListener: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "~b2DestructionListener: Unknown exception");
  }
  return dub_error(L);
}

/** virtual void b2DestructionListener::SayGoodbye(b2Joint *joint)=0
 * vendor/Box2D/Box2D/Dynamics/b2WorldCallbacks.h:43
 */
static int b2DestructionListener_SayGoodbye(lua_State *L) {
  try {
    b2DestructionListener *self = *((b2DestructionListener **)dub_checksdata(L, 1, "b2.DestructionListener"));
    int type__ = lua_type(L, 2);
    void **ptr2__;
    if ( (ptr2__ = dub_issdata(L, 2, "Joint", type__)) ) {
      b2Joint *joint = *((b2Joint **)ptr2__);
      self->SayGoodbye(joint);
      return 0;
    } else {
      b2Fixture *fixture = *((b2Fixture **)dub_checksdata(L, 2, "b2.Fixture"));
      self->SayGoodbye(fixture);
      return 0;
    }
  } catch (std::exception &e) {
    lua_pushfstring(L, "SayGoodbye: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "SayGoodbye: Unknown exception");
  }
  return dub_error(L);
}



// --=============================================== __tostring
static int b2DestructionListener___tostring(lua_State *L) {
  b2DestructionListener *self = *((b2DestructionListener **)dub_checksdata_n(L, 1, "b2.DestructionListener"));
  lua_pushfstring(L, "b2.DestructionListener: %p", self);
  
  return 1;
}

// --=============================================== METHODS

static const struct luaL_Reg b2DestructionListener_member_methods[] = {
  { "__gc"         , b2DestructionListener__b2DestructionListener },
  { "SayGoodbye"   , b2DestructionListener_SayGoodbye },
  { "__tostring"   , b2DestructionListener___tostring },
  { "deleted"      , dub_isDeleted        },
  { NULL, NULL},
};


extern "C" int luaopen_b2_DestructionListener(lua_State *L)
{
  // Create the metatable which will contain all the member methods
  luaL_newmetatable(L, "b2.DestructionListener");
  // <mt>

  // register member methods
  luaL_register(L, NULL, b2DestructionListener_member_methods);
  // save meta-table in b2
  dub_register(L, "b2", "DestructionListener", "DestructionListener");
  // <mt>
  lua_pop(L, 1);
  return 0;
}
