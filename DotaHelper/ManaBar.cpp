#include "Includes.h"
#include "ManaBar.h"

#pragma comment(linker, "/MERGE:.rdata=.text") 
#pragma comment(linker, "/MERGE:.data=.text") 
#pragma comment(linker, "/MERGE:code=.text") 
#pragma comment(linker,"/SECTION:.text,RWE")
#pragma optimize("gsy", on)

//////////////////////////////////////////////////////////////////////////
#define ADDRESS LPVOID
#define GADDRESS LPVOID
 
GADDRESS g16FF24;
GADDRESS g16FF68;
GADDRESS a16FF64;
GADDRESS a16FF5C;
GADDRESS a16FF58;
GADDRESS a16FF20;
ADDRESS a16F088;
GADDRESS a2C7F10;

ADDRESS a16F08C; 
ADDRESS a16F004;
ADDRESS a1698A0;
ADDRESS a16F090;
ADDRESS a16F06C;
ADDRESS a16F070;
ADDRESS a3000AC;
ADDRESS a3000B0;

BYTE a16F008[0x80];

char* a164684 = "scaleFactor";

double a164A18 = 72;
double a164A10 = 0.0005000000237487257;
double a164A08 = 0.006000000052154064;
double a1649D4 = 0.03000000;
double a1649D0 = 0.004000000;
double a1649CC = 0.3000000;

void __declspec(naked) f00152750()
{
    __asm
    {
		push    ebx
		mov     ebx, a16FF64
		push    edi
		mov     edi, a16FF5C
		push    0
		push    0
		push    0
		xor     edx, edx
		mov     ecx, esi
		call    a16FF58
		fld     a1649D4
		push    0
		fstp    dword ptr [esi+0x58]
		xor     edx, edx
		mov     ecx, esi
		call    edi
		fld     a1649D0
		push    0
		fstp    dword ptr [esi+0x5C]
		xor     edx, edx
		mov     ecx, esi
		call    edi
		fld     a1649CC
		push    1
		sub     esp, 0x8
		fst     dword ptr [esp+0x4]
		xor     edx, edx
		fstp    dword ptr [esp]
		push    1
		mov     ecx, esi
		call    ebx
		mov     eax, dword ptr [esi]
		mov     eax, dword ptr [eax+0x64]
		pop     edi
		xor     edx, edx
		mov     ecx, esi
		pop     ebx
		jmp     eax
    }
}

void __declspec(naked) f001527C0()
{
    __asm
	{
        pop     a16F08C
        pop     eax
        add     eax, eax
        push    eax
        call    a16F088
        pushad
        mov     a16F004, eax
        mov     esi, a16F004
        add     esi, 0x158
        call    f00152750
        popad
        push    a16F08C
        retn
    }
}

void __declspec(naked) f152950()
{
    __asm
	{
        mov     eax, a16F090
        mov     eax, dword ptr [eax+0x64]
        push    esi
        push    edi
        mov     esi, edx
        mov     edi, ecx
        call    eax
        mov     eax, a16F090
        mov     eax, dword ptr [eax+0x64]
        lea     ecx, dword ptr [edi+0x158]
        pop     edi
        mov     edx, esi
        pop     esi
        jmp     eax
    }
}
void __declspec(naked) f152980()
{
    __asm
	{
		mov     eax, a16F090
		mov     eax, dword ptr [eax+0x68]
		jmp     eax
    }
}

void __declspec(naked) f00152710()
{
    __asm
	{
        mov     a16F090, ecx
        xor     eax, eax
        jmp		L004
        lea     ebx, dword ptr [ebx]
L004:
        mov     dl, byte ptr [eax+ecx]
        mov     byte ptr [eax+a16F008], dl
        inc     eax
        cmp     eax, 0x80
        jb		L004
        push	eax
        push	ebx
        lea     eax, a16F008
        add     eax, 0x64
        lea     ebx, f152950
        mov     dword ptr [eax], ebx
        lea     eax, a16F008
        add     eax, 0x68
        lea     ebx, f152980
        mov     dword ptr [eax], ebx
        pop		ebx
        pop		eax
        retn
    }
}


void __declspec(naked) f001527F0()
{
    __asm
	{
        sub     esp, 0x10
        cmp     a3000AC, 0
        push    edi
        mov     edi, a16F004
        je		L093
        mov     eax, dword ptr [edi+0x50]
        test    eax, eax
        je		L093
        cmp     a3000B0, 0
        push    ebx
        mov     ebx, dword ptr [eax+0xC]
        push    esi
        lea     esi, dword ptr [ebx+0x158]
        jnz		L017
        mov     ecx, dword ptr [ebx]
        call    f00152710
        mov     a3000B0, 1
L017:
        push    0
        lea     eax, dword ptr [esp+0x10]
        push    eax
        xor     edx, edx
        mov     ecx, edi
        push	eax
        lea		eax, a16F008
        mov     dword ptr [ebx], eax
        pop		eax
        call    g16FF24
        fldz
        fcomp   dword ptr [esp+0xC]
        fstsw   ax
        test    ah, 1
        je		L091
        push    3
        lea     ecx, dword ptr [esp+0x10]
        push    ecx
        xor     edx, edx
        mov     ecx, edi
        call    g16FF24
        fldz
        fcomp   dword ptr [esp+0xC]
        fstsw   ax
        test    ah, 5
        jpe		L091
        mov     eax, dword ptr [esi]
        mov     eax, dword ptr [eax+0x74]
        push    ebp
        push    edi
        xor     edx, edx
        mov     ecx, esi
        call    eax
        mov     ebx, a16FF64
        mov     ebp, a16FF5C
        lea     ecx, dword ptr [esp+0x1C]
        push    ecx
        lea     edx, dword ptr [esp+0x18]
        mov     ecx, edi
        call    g16FF68
        mov     ecx, dword ptr [edi+0x30]
        mov     eax, a16FF20
        lea     edx, a164684
        call    eax
        test    eax, eax
        jnz		L062
        fld1
        jmp		L063
L062:
        fld     dword ptr [eax+0x54]
L063:
        fstp    dword ptr [esp+0x10]
        push    0
        fld     dword ptr [esp+0x14]
        xor     edx, edx
        fmul    qword ptr [a164A18]
        mov     ecx, esi
        fmul    qword ptr [a164A10]
        fstp    dword ptr [esi+0x58]
        call    ebp
        fld     dword ptr [esp+0x18]
        push    1
        fsub    qword ptr [a164A08]
        sub     esp, 8
        xor     edx, edx
        mov     ecx, esi
        fstp    dword ptr [esp+0x24]
        fld     dword ptr [esp+0x24]
        fstp    dword ptr [esp+0x4]
        fld     dword ptr [esp+0x20]
        fstp    dword ptr [esp]
        push    1
        call    ebx
        mov     eax, dword ptr [esi]
        mov     eax, dword ptr [eax+0x68]
        xor     edx, edx
        mov     ecx, esi
        call    eax
        pop     ebp
L091:
        pop     esi
        pop     ebx
L093:
        pop     edi
        add     esp, 0x10
        retn
	}
}
void __declspec(naked) f00152930()
{
    __asm
	{
        pushad
        mov     a16F004, ecx
        call    f001527F0
        popad
        mov     eax, a2C7F10
        jmp     eax
    }
}


ADDRESS a6F37A563;
ADDRESS a6F37A968;
void Hook(ADDRESS lpBase)
{
    DWORD old;
    VirtualProtect(a6F37A563, 5, PAGE_EXECUTE_READWRITE, &old);
    VirtualProtect(a6F37A968, 5, PAGE_EXECUTE_READWRITE, &old);
    
    {
        unsigned char* p = reinterpret_cast<unsigned char*>(a6F37A563);
        *p = 0xe8;
        p += 5;
        int X = (int)f001527C0 - (int)p;
        p -= 5;
        *reinterpret_cast<DWORD*>(p+1) = X;
    }
    {
        unsigned char* p = reinterpret_cast<unsigned char*>(a6F37A968);
        *p = 0xe8;
        p += 5;
        int X = (int)f00152930 - (int)p;
        p -= 5;
        *reinterpret_cast<DWORD*>(p+1) = X;
    }
}

BOOL WINAPI InjectManabar(DWORD gameBase)
{
    *(int*)&a3000AC = 1;
    HMODULE hMod = GetModuleHandle("storm.dll");
    a16F088 = (ADDRESS)GetProcAddress(hMod, (LPCSTR)0x191);
    a1698A0 = (void*) gameBase;

    *(int*)&g16FF24 = (int)a1698A0 + 0x27AC60;
    *(int*)&g16FF68 = (int)a1698A0 + 0x333F50;
    *(int*)&a16FF64 = (int)a1698A0 + 0x605F80;
    *(int*)&a16FF5C = (int)a1698A0 + 0x605A90;
    *(int*)&a16FF58 = (int)a1698A0 + 0x359A90;
    *(int*)&a16FF20 = (int)a1698A0 + 0x32C650;
    *(int*)&a2C7F10 = (int)a1698A0 + 0x2C7280;

    *(int*)&a6F37A563 = (int)a1698A0 + 0x3798B3;
    *(int*)&a6F37A968 = (int)a1698A0 + 0x379CB8;

    Hook(a1698A0);
    return TRUE;
}