#include <iostream>
#include "lua-5.4.6/src//lua.hpp"
#include "src/TestLearning/Person.script.h"

int TestLuaFunc_Add(int a, int b) {
    int sum = 0;
    lua_State *L = luaL_newstate();
    luaL_openlibs(L);
    luaL_dofile(L, "../lua/TestLearningLua/Test_Func.lua");
    lua_getglobal(L, "Add");
    lua_pushnumber(L,a);
    lua_pushnumber(L,b);
    lua_call(L, 2, 1);
    sum = (int) lua_tointegerx(L,-1, NULL);
    lua_pop(L,1);
    return sum;
}

//乘法
int Mul(lua_State *L) {
    int a = lua_tonumber(L, 1);
    int b = lua_tonumber(L, 2);
    lua_pushnumber(L, a * b);
    return 1;
}

void TestLearning()
{
    //===========C++ Call Lua Function======================
    /*
    int sum = TestLuaFunc_Add(1,2);
    std::cout << "sum = " << sum << std::endl;
    */


    //============Lua Call C++ Function======================
    /*
    lua_State *L = luaL_newstate();
    luaL_openlibs(L);
    lua_register(L, "Mul", Mul);
    luaL_dofile(L, "../lua/TestLearningLua/Test_Func.lua");
    lua_close(L);
    */

    //Lua Update Table
    /*
    lua_State *L = luaL_newstate();
    luaL_openlibs(L);
    luaL_dofile(L, "../lua/TestLearningLua/Test_Table.lua");
    lua_getglobal(L, "Data");
    lua_getfield(L,-1,"Name");
    lua_getfield(L,-2,"Version");
    std::string name = lua_tostring(L,-2);
    float version = lua_tonumber(L,-1);
    lua_settop(L,0);
    std::cout << "=============Get LuaTable Value===========" << std::endl;
    std::cout << "Name = " << name << std::endl;
    std::cout << "Version = " << version << std::endl;

    std::cout << "=============Update LuaTable Value===========" << std::endl;
    lua_getglobal(L, "Data");
    lua_pushstring(L, "Unity");
    lua_setfield(L, 1, "Name");
    lua_pushnumber(L, 5.1);
    lua_setfield(L, 1, "Version");

    lua_getglobal(L, "printData");
    lua_call(L, 0, 0);
    lua_close(L);
    */


    //Lua Call C++ Class
    /*
    lua_State *L = luaL_newstate();
    luaL_openlibs(L);

    LuaPerson::Register(L);

    if(luaL_dofile(L, "../lua/TestLearningLua/Test_CppClass.lua")){
        std::cout << lua_tostring(L, -1) << std::endl;
    }
    lua_close(L);
    */

    //Lua Call Lua Class
    /*
    lua_State *L = luaL_newstate();
    luaL_openlibs(L);

    if (luaL_dofile(L, "../lua/TestLearningLua/Test_LuaClass.lua")){
        //std::cout << lua_tostring(L, -1) << std::endl;
    }
    lua_close(L);
    */

    //Lua Modules
    lua_State *L = luaL_newstate();
    luaL_openlibs(L);

    if (luaL_dofile(L, "../lua/init.lua")){
        //std::cout << lua_tostring(L, -1) << std::endl;
    }
    lua_close(L);
}

int main() {

    TestLearning();

    return 0;
}

