/**
 *
 * MACHINE GENERATED FILE. DO NOT EDIT.
 *
 * Bindings for class b2Island
 *
 * This file has been generated by dub 2.1.~.
 */
#include "dub/dub.h"
#include "Box2D/Dynamics/b2Island.h"


/** Set attributes (key, value)
 * 
 */
static int b2Island__set_(lua_State *L) {

  b2Island *self = *((b2Island **)dub_checksdata_n(L, 1, "b2.Island"));
  const char *key = luaL_checkstring(L, 2);
  int key_h = dub_hash(key, 40);
  switch(key_h) {
    case 25: {
      if (DUB_ASSERT_KEY(key, "m_allocator")) break;
      dub_protect(L, 1, 3, "m_allocator");
      self->m_allocator = *((b2StackAllocator **)dub_checksdata_n(L, 3, "b2.StackAllocator"));
      return 0;
    }
    case 6: {
      if (DUB_ASSERT_KEY(key, "m_listener")) break;
      dub_protect(L, 1, 3, "m_listener");
      self->m_listener = *((b2ContactListener **)dub_checksdata_n(L, 3, "b2.ContactListener"));
      return 0;
    }
    case 18: {
      if (DUB_ASSERT_KEY(key, "m_bodies")) break;
      dub_protect(L, 1, 3, "m_bodies");
      self->m_bodies = *((b2Body* **)dub_checksdata_n(L, 3, "Body*"));
      return 0;
    }
    case 29: {
      if (DUB_ASSERT_KEY(key, "m_contacts")) break;
      dub_protect(L, 1, 3, "m_contacts");
      self->m_contacts = *((b2Contact* **)dub_checksdata_n(L, 3, "Contact*"));
      return 0;
    }
    case 35: {
      if (DUB_ASSERT_KEY(key, "m_joints")) break;
      dub_protect(L, 1, 3, "m_joints");
      self->m_joints = *((b2Joint* **)dub_checksdata_n(L, 3, "Joint*"));
      return 0;
    }
    case 16: {
      if (DUB_ASSERT_KEY(key, "m_positions")) break;
      dub_protect(L, 1, 3, "m_positions");
      self->m_positions = *((b2Position **)dub_checksdata_n(L, 3, "b2.Position"));
      return 0;
    }
    case 21: {
      if (DUB_ASSERT_KEY(key, "m_velocities")) break;
      dub_protect(L, 1, 3, "m_velocities");
      self->m_velocities = *((b2Velocity **)dub_checksdata_n(L, 3, "b2.Velocity"));
      return 0;
    }
    case 27: {
      if (DUB_ASSERT_KEY(key, "m_bodyCount")) break;
      self->m_bodyCount = luaL_checkint(L, 3);
      return 0;
    }
    case 39: {
      if (DUB_ASSERT_KEY(key, "m_jointCount")) break;
      self->m_jointCount = luaL_checkint(L, 3);
      return 0;
    }
    case 17: {
      if (DUB_ASSERT_KEY(key, "m_contactCount")) break;
      self->m_contactCount = luaL_checkint(L, 3);
      return 0;
    }
    case 14: {
      if (DUB_ASSERT_KEY(key, "m_bodyCapacity")) break;
      self->m_bodyCapacity = luaL_checkint(L, 3);
      return 0;
    }
    case 8: {
      if (DUB_ASSERT_KEY(key, "m_contactCapacity")) break;
      self->m_contactCapacity = luaL_checkint(L, 3);
      return 0;
    }
    case 34: {
      if (DUB_ASSERT_KEY(key, "m_jointCapacity")) break;
      self->m_jointCapacity = luaL_checkint(L, 3);
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
static int b2Island__get_(lua_State *L) {

  b2Island *self = *((b2Island **)dub_checksdata_n(L, 1, "b2.Island", true));
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
  int key_h = dub_hash(key, 40);
  switch(key_h) {
    case 25: {
      if (DUB_ASSERT_KEY(key, "m_allocator")) break;
      b2StackAllocator *retval__ = self->m_allocator;
      if (!retval__) return 0;
      dub_pushudata(L, retval__, "b2.StackAllocator", false);
      return 1;
    }
    case 6: {
      if (DUB_ASSERT_KEY(key, "m_listener")) break;
      b2ContactListener *retval__ = self->m_listener;
      if (!retval__) return 0;
      dub_pushudata(L, retval__, "b2.ContactListener", false);
      return 1;
    }
    case 18: {
      if (DUB_ASSERT_KEY(key, "m_bodies")) break;
      b2Body* *retval__ = self->m_bodies;
      if (!retval__) return 0;
      dub_pushudata(L, retval__, "Body*", false);
      return 1;
    }
    case 29: {
      if (DUB_ASSERT_KEY(key, "m_contacts")) break;
      b2Contact* *retval__ = self->m_contacts;
      if (!retval__) return 0;
      dub_pushudata(L, retval__, "Contact*", false);
      return 1;
    }
    case 35: {
      if (DUB_ASSERT_KEY(key, "m_joints")) break;
      b2Joint* *retval__ = self->m_joints;
      if (!retval__) return 0;
      dub_pushudata(L, retval__, "Joint*", false);
      return 1;
    }
    case 16: {
      if (DUB_ASSERT_KEY(key, "m_positions")) break;
      b2Position *retval__ = self->m_positions;
      if (!retval__) return 0;
      dub_pushudata(L, retval__, "b2.Position", false);
      return 1;
    }
    case 21: {
      if (DUB_ASSERT_KEY(key, "m_velocities")) break;
      b2Velocity *retval__ = self->m_velocities;
      if (!retval__) return 0;
      dub_pushudata(L, retval__, "b2.Velocity", false);
      return 1;
    }
    case 27: {
      if (DUB_ASSERT_KEY(key, "m_bodyCount")) break;
      lua_pushnumber(L, self->m_bodyCount);
      return 1;
    }
    case 39: {
      if (DUB_ASSERT_KEY(key, "m_jointCount")) break;
      lua_pushnumber(L, self->m_jointCount);
      return 1;
    }
    case 17: {
      if (DUB_ASSERT_KEY(key, "m_contactCount")) break;
      lua_pushnumber(L, self->m_contactCount);
      return 1;
    }
    case 14: {
      if (DUB_ASSERT_KEY(key, "m_bodyCapacity")) break;
      lua_pushnumber(L, self->m_bodyCapacity);
      return 1;
    }
    case 8: {
      if (DUB_ASSERT_KEY(key, "m_contactCapacity")) break;
      lua_pushnumber(L, self->m_contactCapacity);
      return 1;
    }
    case 34: {
      if (DUB_ASSERT_KEY(key, "m_jointCapacity")) break;
      lua_pushnumber(L, self->m_jointCapacity);
      return 1;
    }
  }
  return 0;
}

/** b2Island::b2Island(int32 bodyCapacity, int32 contactCapacity, int32 jointCapacity, b2StackAllocator *allocator, b2ContactListener *listener)
 * vendor/Box2D/Box2D/Dynamics/b2Island.h:38
 */
static int b2Island_b2Island(lua_State *L) {
  try {
    int32 bodyCapacity = dub_checkint(L, 1);
    int32 contactCapacity = dub_checkint(L, 2);
    int32 jointCapacity = dub_checkint(L, 3);
    b2StackAllocator *allocator = *((b2StackAllocator **)dub_checksdata(L, 4, "b2.StackAllocator"));
    b2ContactListener *listener = *((b2ContactListener **)dub_checksdata(L, 5, "b2.ContactListener"));
    b2Island *retval__ = new b2Island(bodyCapacity, contactCapacity, jointCapacity, allocator, listener);
    dub_pushudata(L, retval__, "b2.Island", true);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "b2Island: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "b2Island: Unknown exception");
  }
  return dub_error(L);
}

/** b2Island::~b2Island()
 * vendor/Box2D/Box2D/Dynamics/b2Island.h:39
 */
static int b2Island__b2Island(lua_State *L) {
  try {
    DubUserdata *userdata = ((DubUserdata*)dub_checksdata_d(L, 1, "b2.Island"));
    if (userdata->gc) {
      b2Island *self = (b2Island *)userdata->ptr;
      delete self;
    }
    userdata->gc = false;
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "~b2Island: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "~b2Island: Unknown exception");
  }
  return dub_error(L);
}

/** void b2Island::Clear()
 * vendor/Box2D/Box2D/Dynamics/b2Island.h:42
 */
static int b2Island_Clear(lua_State *L) {
  try {
    b2Island *self = *((b2Island **)dub_checksdata(L, 1, "b2.Island"));
    self->Clear();
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "Clear: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "Clear: Unknown exception");
  }
  return dub_error(L);
}

/** void b2Island::Solve(b2Profile *profile, const b2TimeStep &step, const b2Vec2 &gravity, bool allowSleep)
 * vendor/Box2D/Box2D/Dynamics/b2Island.h:48
 */
static int b2Island_Solve(lua_State *L) {
  try {
    b2Island *self = *((b2Island **)dub_checksdata(L, 1, "b2.Island"));
    b2Profile *profile = *((b2Profile **)dub_checksdata(L, 2, "b2.Profile"));
    b2TimeStep *step = *((b2TimeStep **)dub_checksdata(L, 3, "b2.TimeStep"));
    b2Vec2 *gravity = *((b2Vec2 **)dub_checksdata(L, 4, "b2.Vec2"));
    bool allowSleep = dub_checkboolean(L, 5);
    self->Solve(profile, *step, *gravity, allowSleep);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "Solve: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "Solve: Unknown exception");
  }
  return dub_error(L);
}

/** void b2Island::SolveTOI(const b2TimeStep &subStep, int32 toiIndexA, int32 toiIndexB)
 * vendor/Box2D/Box2D/Dynamics/b2Island.h:50
 */
static int b2Island_SolveTOI(lua_State *L) {
  try {
    b2Island *self = *((b2Island **)dub_checksdata(L, 1, "b2.Island"));
    b2TimeStep *subStep = *((b2TimeStep **)dub_checksdata(L, 2, "b2.TimeStep"));
    int32 toiIndexA = dub_checkint(L, 3);
    int32 toiIndexB = dub_checkint(L, 4);
    self->SolveTOI(*subStep, toiIndexA, toiIndexB);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "SolveTOI: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "SolveTOI: Unknown exception");
  }
  return dub_error(L);
}

/** void b2Island::Add(b2Body *body)
 * vendor/Box2D/Box2D/Dynamics/b2Island.h:53
 */
static int b2Island_Add(lua_State *L) {
  try {
    b2Island *self = *((b2Island **)dub_checksdata(L, 1, "b2.Island"));
    int type__ = lua_type(L, 2);
    void **ptr2__;
    if ( (ptr2__ = dub_issdata(L, 2, "Contact", type__)) ) {
      b2Contact *contact = *((b2Contact **)ptr2__);
      self->Add(contact);
      return 0;
    } else if ( (ptr2__ = dub_issdata(L, 2, "b2.Body", type__)) ) {
      b2Body *body = *((b2Body **)ptr2__);
      self->Add(body);
      return 0;
    } else {
      b2Joint *joint = *((b2Joint **)dub_checksdata(L, 2, "Joint"));
      self->Add(joint);
      return 0;
    }
  } catch (std::exception &e) {
    lua_pushfstring(L, "Add: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "Add: Unknown exception");
  }
  return dub_error(L);
}

/** void b2Island::Report(const b2ContactVelocityConstraint *constraints)
 * vendor/Box2D/Box2D/Dynamics/b2Island.h:72
 */
static int b2Island_Report(lua_State *L) {
  try {
    b2Island *self = *((b2Island **)dub_checksdata(L, 1, "b2.Island"));
    b2ContactVelocityConstraint *constraints = *((b2ContactVelocityConstraint **)dub_checksdata(L, 2, "ContactVelocityConstraint"));
    self->Report(constraints);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "Report: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "Report: Unknown exception");
  }
  return dub_error(L);
}



// --=============================================== __tostring
static int b2Island___tostring(lua_State *L) {
  b2Island *self = *((b2Island **)dub_checksdata_n(L, 1, "b2.Island"));
  lua_pushfstring(L, "b2.Island: %p", self);
  
  return 1;
}

// --=============================================== METHODS

static const struct luaL_Reg b2Island_member_methods[] = {
  { "__newindex"   , b2Island__set_       },
  { "__index"      , b2Island__get_       },
  { "new"          , b2Island_b2Island    },
  { "__gc"         , b2Island__b2Island   },
  { "Clear"        , b2Island_Clear       },
  { "Solve"        , b2Island_Solve       },
  { "SolveTOI"     , b2Island_SolveTOI    },
  { "Add"          , b2Island_Add         },
  { "Report"       , b2Island_Report      },
  { "__tostring"   , b2Island___tostring  },
  { "deleted"      , dub_isDeleted        },
  { NULL, NULL},
};


extern "C" int luaopen_b2_Island(lua_State *L)
{
  // Create the metatable which will contain all the member methods
  luaL_newmetatable(L, "b2.Island");
  // <mt>

  // register member methods
  luaL_register(L, NULL, b2Island_member_methods);
  // save meta-table in b2
  dub_register(L, "b2", "Island", "Island");
  // <mt>
  lua_pop(L, 1);
  return 0;
}
