/*
** modules/filesystem.h
** @brief : Filesystem operations (read/write files)
*/

#pragma once

namespace Filesystem
{
    

    void Initialize();

    //Löve2D Functions

    void proxy_Unzip();

    int Read(lua_State * L);
    int Write(lua_State * L);
    
    int IsFile(lua_State * L);
    int IsDirectory(lua_State * L);

    int GetInfo(lua_State * L);

    int SetIdentity(lua_State * L);
    int GetIdentity(lua_State * L);

    int GetSaveDirectory(lua_State * L);

    int CreateDirectory(lua_State * L);

    int GetSize(lua_State * L);

    int GetDirectoryItems(lua_State * L);

    int Load(lua_State * L);

    int Remove(lua_State * L);
    
    int RemoveSdsetupZip(lua_State * L);

    int Unzip(lua_State * L);

    int initRomfs(lua_State * L);

    int exitRomfs(lua_State * L);

    int SetNextLoad(lua_State * L);

    //End Löve2D Functions

    extern std::string GetSaveDirectory();

    std::string Redirect(const char * path);

    int Register(lua_State * L);

    extern "C" bool createSubfolder(const char* pathC);

    void Exit();
}

