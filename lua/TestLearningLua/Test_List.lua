local aa = {{name = "xx",value = "11"},
            {name = "yy"},
            {name = "zz"}}
local ListUtils = require("ListUtils")
local item = ListUtils:Find(aa, function(v) return v.name == "xx" end)

print(item.name, item.value)