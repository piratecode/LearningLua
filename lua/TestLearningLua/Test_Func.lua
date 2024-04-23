--print("Hello Lua")

function Add(a, b)
    return a + b
end


function TestCPPFunc_Mul(a, b)
    return Mul(a,b)
end

print("TestCPPFunc_Mul(2,3) = ", TestCPPFunc_Mul(2,3))