--[[------------------------------------------------------

  box2d bindings generator
  ------------------------

  This uses the 'dub' tool and Doxygen to generate the
  bindings for Box2D.

  Input:  headers in 'vendor'
  Output: cpp files in 'src'

--]]------------------------------------------------------
require 'lubyk'
require 'dub'

local base = lk.pathDir(lk.scriptDir())
local b2_base = base .. '/vendor/Box2D'

local ins = dub.Inspector {
  INPUT   = {
    b2_base .. '/Box2D/Common',
    b2_base .. '/Box2D/Collision',
    b2_base .. '/Box2D/Collision/Shapes',
    b2_base .. '/Box2D/Dynamics',
  },
}

local binder = dub.LuaBinder()

-- Renamge b2Xyz classes to b2.Xyz
function binder:name(elem)
  local name = elem.name
  if name then
    name = string.match(name, '^b2(.+)') or name
  end
  return name
end

function binder:constName(name)
  name = string.match(name, '^b2_(.+)') or name
  return name
end

binder:bind(ins, {
  output_directory = base .. '/src',
  custom_bindings  = base .. '/bind',
  ignore = {
    'b2TreeNode',
  },
  -- Remove this part in headers
  header_base = b2_base,
  -- Execute all lua_open in a single go
  -- with lua_openb2 (creates b2.cpp).
  single_lib = 'b2',
  -- Other name so that we can first load b2.lua
  luaopen = 'b2_vendor',
})


