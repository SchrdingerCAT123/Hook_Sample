// hook_wiki.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "my_hook.h"




int main()
{
	MyHook::Instance().InstallHook();


	return MyHook::Instance().Messsages();
}

