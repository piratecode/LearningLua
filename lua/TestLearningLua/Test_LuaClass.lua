package.path = package.path .. ";D:/CLionProjects/LearningLua/lua/?.lua"
--print(package.cpath)

require("functions")

local Parent = class("Parent")

function Parent:ctor()
    print("Parent ctor")
end

function Parent:GetName()
    print("Parent.GetName")
end

function Parent:GetAge()
    print("Parent.GetAge")
end

local Child = class("Child", Parent)

function Child:ctor()
    Child.super.ctor(self)
    print("Child ctor")
end

function Child:GetName()
    print("Child.GetName")
end

--local p = Parent.new()
local c = Child.new()
print(c:GetName())
print(c:GetAge())

