#include "StdAfx.hpp"

/////////////////////////////////////////////////
//// (C) 2017 James Bernard Schumacher III
/////////////////////////////////////////////////

/*
   Copyright (C) 2017 James Bernard Schumacher III
   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at
       http://www.apache.org/licenses/LICENSE-2.0
   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
*/

#ifdef CPP_API_OS_WINDOWS

extern "C" BOOL APIENTRY DllMain(HINSTANCE hDll, DWORD dwReason, LPVOID lpReserved) throw()
{
    switch(dwReason)
    {
    case DLL_PROCESS_ATTACH:
        break;
    case DLL_THREAD_ATTACH:
        break;
    case DLL_THREAD_DETACH:
        break;
    case DLL_PROCESS_DETACH:
        break;
    default:
        return FALSE;
    }

    return TRUE;
}

#endif // CPP_API_OS_WINDOWS
