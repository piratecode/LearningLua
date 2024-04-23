cmake_minimum_required(VERSION 3.25)
project(LearningLua)

set(CMAKE_CXX_STANDARD 17)

add_executable(LearningLua
        main.cpp
        lua-5.4.6/src/lapi.c lua-5.4.6/src/lapi.h lua-5.4.6/src/lauxlib.c lua-5.4.6/src/lauxlib.h lua-5.4.6/src/lbaselib.c lua-5.4.6/src/lcode.c lua-5.4.6/src/lcode.h lua-5.4.6/src/lcorolib.c lua-5.4.6/src/lctype.c lua-5.4.6/src/lctype.h lua-5.4.6/src/ldblib.c lua-5.4.6/src/ldebug.c lua-5.4.6/src/ldebug.h lua-5.4.6/src/ldo.c lua-5.4.6/src/ldo.h lua-5.4.6/src/ldump.c lua-5.4.6/src/lfunc.c lua-5.4.6/src/lfunc.h lua-5.4.6/src/lgc.c lua-5.4.6/src/lgc.h lua-5.4.6/src/linit.c lua-5.4.6/src/liolib.c lua-5.4.6/src/ljumptab.h lua-5.4.6/src/llex.c lua-5.4.6/src/llex.h lua-5.4.6/src/llimits.h lua-5.4.6/src/lmathlib.c lua-5.4.6/src/lmem.c lua-5.4.6/src/lmem.h lua-5.4.6/src/loadlib.c lua-5.4.6/src/lobject.c lua-5.4.6/src/lobject.h lua-5.4.6/src/lopcodes.c lua-5.4.6/src/lopcodes.h lua-5.4.6/src/lopnames.h lua-5.4.6/src/loslib.c lua-5.4.6/src/lparser.c lua-5.4.6/src/lparser.h lua-5.4.6/src/lprefix.h lua-5.4.6/src/lstate.c lua-5.4.6/src/lstate.h lua-5.4.6/src/lstring.c lua-5.4.6/src/lstring.h lua-5.4.6/src/lstrlib.c lua-5.4.6/src/ltable.c lua-5.4.6/src/ltable.h lua-5.4.6/src/ltablib.c lua-5.4.6/src/ltm.c lua-5.4.6/src/ltm.h lua-5.4.6/src/lua.c lua-5.4.6/src/lua.h lua-5.4.6/src/lua.hpp lua-5.4.6/src/luac.c lua-5.4.6/src/luaconf.h lua-5.4.6/src/lualib.h lua-5.4.6/src/lundump.c lua-5.4.6/src/lundump.h lua-5.4.6/src/lutf8lib.c lua-5.4.6/src/lvm.c lua-5.4.6/src/lvm.h lua-5.4.6/src/lzio.c lua-5.4.6/src/lzio.h
        src/TestLearning/Person.cpp src/TestLearning/Person.h src/TestLearning/Person.script.h src/TestLearning/Person.script.cpp
        )