
#include "../../lua-5.4.6/src/lua.hpp"
#include "Person.h"
#include "Person.script.h"

namespace LuaPerson {
    int lua_new_person(lua_State *L)
    {
        Person** p = (Person**)lua_newuserdata(L, sizeof(Person*));
        *p = new Person();
        luaL_getmetatable(L, "Person");
        lua_setmetatable(L, -2);
        return 1;
    }

    int lua_get_name(lua_State *L)
    {
        Person** p = (Person**)luaL_checkudata(L, 1, "Person");
        lua_pushstring(L, (*p)->GetName().c_str());
        return 1;
    }

    int lua_get_age(lua_State *L)
    {
        Person** p = (Person**)luaL_checkudata(L, 1, "Person");
        lua_pushinteger(L, (*p)->GetAge());
        return 1;
    }

    int lua_set_name(lua_State *L)
    {
        Person** p = (Person**)luaL_checkudata(L, 1, "Person");
        (*p)->SetName(luaL_checkstring(L, 2));
        return 0;
    }

    int lua_set_age(lua_State *L)
    {
        Person** p = (Person**)luaL_checkudata(L, 1, "Person");
        (*p)->SetAge(luaL_checkinteger(L, 2));
        return 0;
    }

    const luaL_Reg Lib_Member_Funcs[] = {
            {"new", lua_new_person},
            {"get_name", lua_get_name},
            {"get_age", lua_get_age},
            {"set_name", lua_set_name},
            {"set_age", lua_set_age},
            {NULL, NULL}
    };

//    const luaL_Reg Lib_Constructor_Funcs[] = {
//            {"new", lua_new_person},
//            {NULL, NULL}
//    };


    int Register(lua_State *L) {
        auto openf = [](lua_State *L) {
            luaL_newmetatable(L, "Person");
            lua_pushvalue(L, -1);
            lua_setfield(L, -2, "__index");

            luaL_setfuncs(L, Lib_Member_Funcs, 0);
            //luaL_newlib(L, Lib_Constructor_Funcs);
            return 1;
        };
        luaL_requiref(L, "Person", openf, 1);
        return 1;
    }
}
