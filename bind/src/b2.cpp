/**
 *
 * MACHINE GENERATED FILE. DO NOT EDIT.
 *
 * Bindings for library b2
 *
 * This file has been generated by dub 2.1.~.
 */
#include "dub/dub.h"


extern "C" {
}

// --=============================================== FUNCTIONS
static const struct luaL_Reg b2_functions[] = {
  { NULL, NULL},
};


extern "C" int luaopen_b2(lua_State *L) {

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
  luaL_register(L, NULL, b2_functions);
  // <lib>
  lua_pop(L, 1);
  return 0;
}
