#include "discord_register.h"
#include "discord_rpc.h"

extern "C"
{
#include "lua.h"
#include "lualib.h"
#include "lauxlib.h"
}

extern "C"
{
	int test(lua_State* L)
	{
		printf("Hello, World!\n");
		return 0;
	}

	__declspec(dllexport) int luaopen_luarpc(lua_State* L)
	{
		lua_register(L, "test", test);
		return 0;
	}
}


