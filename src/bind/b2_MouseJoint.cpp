/**
 *
 * MACHINE GENERATED FILE. DO NOT EDIT.
 *
 * Bindings for class b2MouseJoint
 *
 * This file has been generated by dub 2.1.~.
 */
#include "dub/dub.h"
#include "Box2D/Dynamics/Joints/b2MouseJoint.h"


/** ~b2MouseJoint()
 * 
 */
static int b2MouseJoint__b2MouseJoint(lua_State *L) {
  try {
    DubUserdata *userdata = ((DubUserdata*)dub_checksdata_d(L, 1, "b2.MouseJoint"));
    if (userdata->gc) {
      b2MouseJoint *self = (b2MouseJoint *)userdata->ptr;
      delete self;
    }
    userdata->gc = false;
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "~b2MouseJoint: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "~b2MouseJoint: Unknown exception");
  }
  return dub_error(L);
}

/** Cast (class_name)
 * 
 */
static int b2MouseJoint__cast_(lua_State *L) {

  b2MouseJoint *self = *((b2MouseJoint **)dub_checksdata_n(L, 1, "b2.MouseJoint"));
  const char *key = luaL_checkstring(L, 2);
  void **retval__ = (void**)lua_newuserdata(L, sizeof(void*));
  int key_h = dub_hash(key, 2);
  switch(key_h) {
    case 0: {
      if (DUB_ASSERT_KEY(key, "b2.Joint")) break;
      *retval__ = static_cast<b2Joint *>(self);
      return 1;
    }
  }
  return 0;
}

/** b2Vec2 b2MouseJoint::GetAnchorA() const
 * vendor/Box2D/Box2D/Dynamics/Joints/b2MouseJoint.h:65
 */
static int b2MouseJoint_GetAnchorA(lua_State *L) {
  try {
    b2MouseJoint *self = *((b2MouseJoint **)dub_checksdata(L, 1, "b2.MouseJoint"));
    dub_pushudata(L, new b2Vec2(self->GetAnchorA()), "b2.Vec2", true);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "GetAnchorA: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "GetAnchorA: Unknown exception");
  }
  return dub_error(L);
}

/** b2Vec2 b2MouseJoint::GetAnchorB() const
 * vendor/Box2D/Box2D/Dynamics/Joints/b2MouseJoint.h:68
 */
static int b2MouseJoint_GetAnchorB(lua_State *L) {
  try {
    b2MouseJoint *self = *((b2MouseJoint **)dub_checksdata(L, 1, "b2.MouseJoint"));
    dub_pushudata(L, new b2Vec2(self->GetAnchorB()), "b2.Vec2", true);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "GetAnchorB: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "GetAnchorB: Unknown exception");
  }
  return dub_error(L);
}

/** b2Vec2 b2MouseJoint::GetReactionForce(float32 inv_dt) const
 * vendor/Box2D/Box2D/Dynamics/Joints/b2MouseJoint.h:71
 */
static int b2MouseJoint_GetReactionForce(lua_State *L) {
  try {
    b2MouseJoint *self = *((b2MouseJoint **)dub_checksdata(L, 1, "b2.MouseJoint"));
    float32 inv_dt = dub_checknumber(L, 2);
    dub_pushudata(L, new b2Vec2(self->GetReactionForce(inv_dt)), "b2.Vec2", true);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "GetReactionForce: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "GetReactionForce: Unknown exception");
  }
  return dub_error(L);
}

/** float32 b2MouseJoint::GetReactionTorque(float32 inv_dt) const
 * vendor/Box2D/Box2D/Dynamics/Joints/b2MouseJoint.h:74
 */
static int b2MouseJoint_GetReactionTorque(lua_State *L) {
  try {
    b2MouseJoint *self = *((b2MouseJoint **)dub_checksdata(L, 1, "b2.MouseJoint"));
    float32 inv_dt = dub_checknumber(L, 2);
    lua_pushnumber(L, self->GetReactionTorque(inv_dt));
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "GetReactionTorque: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "GetReactionTorque: Unknown exception");
  }
  return dub_error(L);
}

/** void b2MouseJoint::SetTarget(const b2Vec2 &target)
 * vendor/Box2D/Box2D/Dynamics/Joints/b2MouseJoint.h:77
 */
static int b2MouseJoint_SetTarget(lua_State *L) {
  try {
    b2MouseJoint *self = *((b2MouseJoint **)dub_checksdata(L, 1, "b2.MouseJoint"));
    b2Vec2 *target = *((b2Vec2 **)dub_checksdata(L, 2, "b2.Vec2"));
    self->SetTarget(*target);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "SetTarget: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "SetTarget: Unknown exception");
  }
  return dub_error(L);
}

/** const b2Vec2 & b2MouseJoint::GetTarget() const
 * vendor/Box2D/Box2D/Dynamics/Joints/b2MouseJoint.h:78
 */
static int b2MouseJoint_GetTarget(lua_State *L) {
  try {
    b2MouseJoint *self = *((b2MouseJoint **)dub_checksdata(L, 1, "b2.MouseJoint"));
    dub_pushudata(L, const_cast<b2Vec2*>(&self->GetTarget()), "b2.Vec2", false);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "GetTarget: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "GetTarget: Unknown exception");
  }
  return dub_error(L);
}

/** void b2MouseJoint::SetMaxForce(float32 force)
 * vendor/Box2D/Box2D/Dynamics/Joints/b2MouseJoint.h:81
 */
static int b2MouseJoint_SetMaxForce(lua_State *L) {
  try {
    b2MouseJoint *self = *((b2MouseJoint **)dub_checksdata(L, 1, "b2.MouseJoint"));
    float32 force = dub_checknumber(L, 2);
    self->SetMaxForce(force);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "SetMaxForce: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "SetMaxForce: Unknown exception");
  }
  return dub_error(L);
}

/** float32 b2MouseJoint::GetMaxForce() const
 * vendor/Box2D/Box2D/Dynamics/Joints/b2MouseJoint.h:82
 */
static int b2MouseJoint_GetMaxForce(lua_State *L) {
  try {
    b2MouseJoint *self = *((b2MouseJoint **)dub_checksdata(L, 1, "b2.MouseJoint"));
    lua_pushnumber(L, self->GetMaxForce());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "GetMaxForce: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "GetMaxForce: Unknown exception");
  }
  return dub_error(L);
}

/** void b2MouseJoint::SetFrequency(float32 hz)
 * vendor/Box2D/Box2D/Dynamics/Joints/b2MouseJoint.h:85
 */
static int b2MouseJoint_SetFrequency(lua_State *L) {
  try {
    b2MouseJoint *self = *((b2MouseJoint **)dub_checksdata(L, 1, "b2.MouseJoint"));
    float32 hz = dub_checknumber(L, 2);
    self->SetFrequency(hz);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "SetFrequency: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "SetFrequency: Unknown exception");
  }
  return dub_error(L);
}

/** float32 b2MouseJoint::GetFrequency() const
 * vendor/Box2D/Box2D/Dynamics/Joints/b2MouseJoint.h:86
 */
static int b2MouseJoint_GetFrequency(lua_State *L) {
  try {
    b2MouseJoint *self = *((b2MouseJoint **)dub_checksdata(L, 1, "b2.MouseJoint"));
    lua_pushnumber(L, self->GetFrequency());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "GetFrequency: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "GetFrequency: Unknown exception");
  }
  return dub_error(L);
}

/** void b2MouseJoint::SetDampingRatio(float32 ratio)
 * vendor/Box2D/Box2D/Dynamics/Joints/b2MouseJoint.h:89
 */
static int b2MouseJoint_SetDampingRatio(lua_State *L) {
  try {
    b2MouseJoint *self = *((b2MouseJoint **)dub_checksdata(L, 1, "b2.MouseJoint"));
    float32 ratio = dub_checknumber(L, 2);
    self->SetDampingRatio(ratio);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "SetDampingRatio: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "SetDampingRatio: Unknown exception");
  }
  return dub_error(L);
}

/** float32 b2MouseJoint::GetDampingRatio() const
 * vendor/Box2D/Box2D/Dynamics/Joints/b2MouseJoint.h:90
 */
static int b2MouseJoint_GetDampingRatio(lua_State *L) {
  try {
    b2MouseJoint *self = *((b2MouseJoint **)dub_checksdata(L, 1, "b2.MouseJoint"));
    lua_pushnumber(L, self->GetDampingRatio());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "GetDampingRatio: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "GetDampingRatio: Unknown exception");
  }
  return dub_error(L);
}

/** void b2MouseJoint::Dump()
 * vendor/Box2D/Box2D/Dynamics/Joints/b2MouseJoint.h:93
 */
static int b2MouseJoint_Dump(lua_State *L) {
  try {
    b2MouseJoint *self = *((b2MouseJoint **)dub_checksdata(L, 1, "b2.MouseJoint"));
    self->Dump();
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "Dump: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "Dump: Unknown exception");
  }
  return dub_error(L);
}

/** void b2MouseJoint::ShiftOrigin(const b2Vec2 &newOrigin)
 * vendor/Box2D/Box2D/Dynamics/Joints/b2MouseJoint.h:96
 */
static int b2MouseJoint_ShiftOrigin(lua_State *L) {
  try {
    b2MouseJoint *self = *((b2MouseJoint **)dub_checksdata(L, 1, "b2.MouseJoint"));
    b2Vec2 *newOrigin = *((b2Vec2 **)dub_checksdata(L, 2, "b2.Vec2"));
    self->ShiftOrigin(*newOrigin);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "ShiftOrigin: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "ShiftOrigin: Unknown exception");
  }
  return dub_error(L);
}

/** b2JointType b2Joint::GetType() const
 * vendor/Box2D/Box2D/Dynamics/Joints/b2Joint.h:109
 */
static int b2MouseJoint_GetType(lua_State *L) {
  try {
    b2MouseJoint *self = *((b2MouseJoint **)dub_checksdata(L, 1, "b2.MouseJoint"));
    lua_pushnumber(L, self->GetType());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "GetType: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "GetType: Unknown exception");
  }
  return dub_error(L);
}

/** b2Body * b2Joint::GetBodyA()
 * vendor/Box2D/Box2D/Dynamics/Joints/b2Joint.h:112
 */
static int b2MouseJoint_GetBodyA(lua_State *L) {
  try {
    b2MouseJoint *self = *((b2MouseJoint **)dub_checksdata(L, 1, "b2.MouseJoint"));
    b2Body *retval__ = self->GetBodyA();
    if (!retval__) return 0;
    dub_pushudata(L, retval__, "b2.Body", false);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "GetBodyA: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "GetBodyA: Unknown exception");
  }
  return dub_error(L);
}

/** b2Body * b2Joint::GetBodyB()
 * vendor/Box2D/Box2D/Dynamics/Joints/b2Joint.h:115
 */
static int b2MouseJoint_GetBodyB(lua_State *L) {
  try {
    b2MouseJoint *self = *((b2MouseJoint **)dub_checksdata(L, 1, "b2.MouseJoint"));
    b2Body *retval__ = self->GetBodyB();
    if (!retval__) return 0;
    dub_pushudata(L, retval__, "b2.Body", false);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "GetBodyB: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "GetBodyB: Unknown exception");
  }
  return dub_error(L);
}

/** b2Joint * b2Joint::GetNext()
 * vendor/Box2D/Box2D/Dynamics/Joints/b2Joint.h:130
 */
static int b2MouseJoint_GetNext(lua_State *L) {
  try {
    b2MouseJoint *self = *((b2MouseJoint **)dub_checksdata(L, 1, "b2.MouseJoint"));
    b2Joint *retval__ = self->GetNext();
    if (!retval__) return 0;
    dub_pushudata(L, retval__, "b2.Joint", false);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "GetNext: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "GetNext: Unknown exception");
  }
  return dub_error(L);
}

/** void * b2Joint::GetUserData() const
 * vendor/Box2D/Box2D/Dynamics/Joints/b2Joint.h:134
 */
static int b2MouseJoint_GetUserData(lua_State *L) {
  try {
    b2MouseJoint *self = *((b2MouseJoint **)dub_checksdata(L, 1, "b2.MouseJoint"));
    self->GetUserData();
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "GetUserData: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "GetUserData: Unknown exception");
  }
  return dub_error(L);
}

/** void b2Joint::SetUserData(void *data)
 * vendor/Box2D/Box2D/Dynamics/Joints/b2Joint.h:137
 */
static int b2MouseJoint_SetUserData(lua_State *L) {
  try {
    b2MouseJoint *self = *((b2MouseJoint **)dub_checksdata(L, 1, "b2.MouseJoint"));
    void *data = *((void **)dub_checksdata(L, 2, "void"));
    self->SetUserData(data);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "SetUserData: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "SetUserData: Unknown exception");
  }
  return dub_error(L);
}

/** bool b2Joint::IsActive() const
 * vendor/Box2D/Box2D/Dynamics/Joints/b2Joint.h:140
 */
static int b2MouseJoint_IsActive(lua_State *L) {
  try {
    b2MouseJoint *self = *((b2MouseJoint **)dub_checksdata(L, 1, "b2.MouseJoint"));
    lua_pushboolean(L, self->IsActive());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "IsActive: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "IsActive: Unknown exception");
  }
  return dub_error(L);
}

/** bool b2Joint::GetCollideConnected() const
 * vendor/Box2D/Box2D/Dynamics/Joints/b2Joint.h:145
 */
static int b2MouseJoint_GetCollideConnected(lua_State *L) {
  try {
    b2MouseJoint *self = *((b2MouseJoint **)dub_checksdata(L, 1, "b2.MouseJoint"));
    lua_pushboolean(L, self->GetCollideConnected());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "GetCollideConnected: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "GetCollideConnected: Unknown exception");
  }
  return dub_error(L);
}



// --=============================================== __tostring
static int b2MouseJoint___tostring(lua_State *L) {
  b2MouseJoint *self = *((b2MouseJoint **)dub_checksdata_n(L, 1, "b2.MouseJoint"));
  lua_pushfstring(L, "b2.MouseJoint: %p", self);
  
  return 1;
}

// --=============================================== METHODS

static const struct luaL_Reg b2MouseJoint_member_methods[] = {
  { "__gc"         , b2MouseJoint__b2MouseJoint },
  { "_cast_"       , b2MouseJoint__cast_  },
  { "GetAnchorA"   , b2MouseJoint_GetAnchorA },
  { "GetAnchorB"   , b2MouseJoint_GetAnchorB },
  { "GetReactionForce", b2MouseJoint_GetReactionForce },
  { "GetReactionTorque", b2MouseJoint_GetReactionTorque },
  { "SetTarget"    , b2MouseJoint_SetTarget },
  { "GetTarget"    , b2MouseJoint_GetTarget },
  { "SetMaxForce"  , b2MouseJoint_SetMaxForce },
  { "GetMaxForce"  , b2MouseJoint_GetMaxForce },
  { "SetFrequency" , b2MouseJoint_SetFrequency },
  { "GetFrequency" , b2MouseJoint_GetFrequency },
  { "SetDampingRatio", b2MouseJoint_SetDampingRatio },
  { "GetDampingRatio", b2MouseJoint_GetDampingRatio },
  { "Dump"         , b2MouseJoint_Dump    },
  { "ShiftOrigin"  , b2MouseJoint_ShiftOrigin },
  { "GetType"      , b2MouseJoint_GetType },
  { "GetBodyA"     , b2MouseJoint_GetBodyA },
  { "GetBodyB"     , b2MouseJoint_GetBodyB },
  { "GetNext"      , b2MouseJoint_GetNext },
  { "GetUserData"  , b2MouseJoint_GetUserData },
  { "SetUserData"  , b2MouseJoint_SetUserData },
  { "IsActive"     , b2MouseJoint_IsActive },
  { "GetCollideConnected", b2MouseJoint_GetCollideConnected },
  { "__tostring"   , b2MouseJoint___tostring },
  { "deleted"      , dub_isDeleted        },
  { NULL, NULL},
};


extern "C" int luaopen_b2_MouseJoint(lua_State *L)
{
  // Create the metatable which will contain all the member methods
  luaL_newmetatable(L, "b2.MouseJoint");
  // <mt>

  // register member methods
  luaL_register(L, NULL, b2MouseJoint_member_methods);
  // save meta-table in b2
  dub_register(L, "b2", "MouseJoint", "MouseJoint");
  // <mt>
  lua_pop(L, 1);
  return 0;
}
